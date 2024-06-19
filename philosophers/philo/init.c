/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevlar <kevlar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:04:07 by jmartos           #+#    #+#             */
/*   Updated: 2024/06/19 21:20:51 by kevlar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/*
	Para tener en cuenta las posiciones de los filosofos y de los tenedores:
		
		- Los filosofos tienen diferentes posiciones (chairs = 1, 2, 3, ...)
		y direrentes id (philo 0, philo, 1, philo 2, ...).
			
		- Los tenedores cambian segun si el filosofo tiene id par o impar.
*/

static void	forks_init(t_philo *philo, t_fork *fork, int pos)
{
	int	philo_num;
	
	philo_num = philo->table->chairs;
	if(philo->id % 2 == 0)
	{
		philo->L_fork = &fork[pos];
		philo->R_fork = &fork[(pos + 1) % philo_num];
	}
	else
	{
		philo->L_fork = &fork[(pos + 1) % philo_num];
		philo->R_fork = &fork[pos];
	}
	printf("Philo %ld: L_fork = %d, R_fork = %d\n", philo->id, philo->L_fork->id, philo->R_fork->id);
}

static void	philo_init(t_table *table)
{
	int 	pos;
	t_philo	*philo;
	
	pos = 0;
	while (pos < table->chairs)
	{
		philo = &table->philos[pos]; // hacer psudocodigo
		philo->id = pos + 1;
		philo->meals_counter = 0;
		philo->full = false;
		philo->table = table;
		mutex_handle(&philo->philo_mutex, INIT);
		forks_init(philo, table->forks, pos);
		pos++;
	}
}

void	table_init(t_table *table)
{
	int	pos;

	pos = 0;
	table->end_program = false;
	table->threads_ready = false;
	table->threads_running = 0;
	table->philos = safe_malloc(sizeof(t_philo) * table->chairs);
	table->forks = safe_malloc(sizeof(t_fork) * table->chairs);
	if (!table->philos || !table->forks)
		error_exit("ERROR! MALLOC DONT ALLOCATE MEMORY!");
	mutex_handle(&table-> table_mutex, INIT);
	mutex_handle(&table-> write_mutex, INIT);
	while (pos < table->chairs)
	{
		mutex_handle(&table->forks[pos].fork, INIT); // luego hare el pseudocodigo.
		table->forks[pos].id = pos; // de aquie tambien lo hare luego
		pos++;
	}
	philo_init(table);
}
