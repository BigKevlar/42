/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevlar <kevlar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 01:21:15 by kevlar            #+#    #+#             */
/*   Updated: 2024/06/26 02:02:31 by kevlar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	only_one_philo(t_philo *philo)
{
	printf("[%lu ms] philo nº%d has taken a fork.\n", get_time(), 1);
	custom_usleep(philo->table->time2die, philo->table);
	printf(RED "[%lu ms] philo nº%d his dead!\n" END, get_time(), 1);
}

int	start_game(t_table *table)
{
	int			pos;
	pthread_t	*philo;

	philo = ft_calloc(sizeof(pthread_t), table->philo_count + 1);
	pos = 0;
	while (pos < table->philo_count)
	{
		if (pthread_create(&philo[pos], NULL, (void *)dinner,
				(void *)&table->philos[pos]))
		{
			printf(RED "ERROR! (start_game)\n" END);
			return (1);
		}
		pos++;
	}
	if (pthread_create(&philo[pos], NULL, (void *)check_dead, (void *)table))
	{
		printf(RED "ERROR! (start_game)\n" END);
		return (1);
	}
	pos = 0;
	while (pos < table->philo_count + 1)
		pthread_join(philo[pos++], NULL);
	free(philo);
	return (0);
}

void	the_end(t_table *table)
{
	int	pos;

	pos = 0;
	while (pos < table->philo_count)
	{
		forks_unlock(&table->philos[pos]);
		pthread_mutex_destroy(&table->forks[pos]);
		pos++;
	}
	pthread_mutex_destroy(&table->write_mutex);
	pthread_mutex_destroy(&table->eating);
	if (table->forks)
		free(table->forks);
	if (table->philos)
		free(table->philos);
	free(table);
}
