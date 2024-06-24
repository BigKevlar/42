/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_getters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 20:54:58 by kevlar            #+#    #+#             */
/*   Updated: 2024/06/24 21:43:44 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long	get_last_meal(t_philo *philo)
{
	long	last_meal;

	pthread_mutex_lock(&philo->table->write_mutex);
	last_meal = philo->last_meal;
	pthread_mutex_unlock(&philo->table->write_mutex);
	return (last_meal);
}

int	get_meal_counter(t_philo *philo)
{
	int	meals_counter;

	pthread_mutex_lock(&philo->table->write_mutex);
	meals_counter = philo->meals_counter;
	pthread_mutex_unlock(&philo->table->write_mutex);
	return (meals_counter);
}

int	get_dead(t_philo *philo)
{
	int	is_dead;

	pthread_mutex_lock(&philo->table->write_mutex);
	is_dead = 0;
	if (philo->table->is_dead || philo->table->all_full == philo->table->philo_count)
		is_dead = 1;
	pthread_mutex_unlock(&philo->table->write_mutex);
	return (is_dead);
}

int	get_out(t_table *table)
{
	int	finish_program;

	pthread_mutex_lock(&table->write_mutex);
	finish_program = table->finish_program;
	pthread_mutex_unlock(&table->write_mutex);
	return (finish_program);
}
