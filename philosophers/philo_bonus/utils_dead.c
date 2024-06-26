/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_dead.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevlar <kevlar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:35:59 by kevlar            #+#    #+#             */
/*   Updated: 2024/06/26 01:05:01 by kevlar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_diying_1(t_philo *philo)
{
	if (get_time() - get_last_meal(philo) > (long)philo->table->time2die)
	{
		set_dead(philo);
		printf(RED"[%ld ms] philo nº%ld is dead.\n"END, get_time(), philo->id);
		return (1);
	}
	return (0);
}

void	ft_diying_2(t_table *table, int *is_dead, int *pos)
{
	if (ft_diying_1(&table->philos[*pos]))
		*is_dead = 1;
}

void	dead_or_full(int *is_dead, int *all_full, int *pos, t_table *table)
{
	while (*is_dead < table->philo_count)
	{
		ft_diying_2(table, is_dead, pos);
		if (get_meal_counter(&table->philos[*pos]) >= table->meals_limit)
			(all_full)++;
		if (is_dead)
			break ;
	}
}

void	*check_dead(void *tmp_table)
{
	t_table	*table;
	int		pos;

	table = (t_table *)tmp_table;
	while (get_dead(table->philos) == 0)
	{
		pos = 0;
		dead_or_full(&table->is_dead, &table->all_full, &pos, table);
		if (get_dead(table->philos))
			break ;
		custom_usleep(5, table);
	}
	set_out(table);
	return (NULL);
}
