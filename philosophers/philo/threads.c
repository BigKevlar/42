/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevlar <kevlar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:07:32 by jmartos           #+#    #+#             */
/*   Updated: 2024/06/19 22:50:08 by kevlar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/*
	Control para los estados de los hilos.

	Threads functions (pthread.h):
		CREATE
		JOIN
		DETACH
		LOCK
		UNLOCK
*/

static void check_thread_error(int status, t_opcode opcode)
{
	if (0 == status)
		return;
	if (EAGAIN == status)
		error_exit("ERROR! CANT CREATE NEW THREAD");
	else if (EINVAL == status && CREATE == opcode)
		error_exit("ERROR! INVALID ATTR");
	else if (EINVAL == status && (JOIN == opcode || DETACH == opcode))
		error_exit("ERROR! THE THREAD IN NOT JOINABLE");
	else if (EDEADLK == status)
		error_exit("ERROR! DEADLOCK DETECTED");
	else if (EPERM == status)
		error_exit("ERROR! DONT HAVE ENOUGHT PERMISSIONS");
	else if (ESRCH == status)
		error_exit("ERROR! NO THREADS COULD BE FOUND");
}

void thread_handle(pthread_t *thread, void *funct, void *data, t_opcode opcode)
{
	int status;

	if (opcode == CREATE)
	{
		status = pthread_create(thread, NULL, funct, data);
		check_thread_error(status, CREATE);
	}
	else if (opcode == JOIN)
	{
		status = pthread_join(*thread, NULL);
		check_thread_error(status, JOIN);
	}
	else if (opcode == DETACH)
	{
		status = pthread_detach(*thread);
		check_thread_error(status, DETACH);
	}
	else
		error_exit("ERROR! OPCODE THREAD HANDLE WRONG (USE 'CREATE', 'JOIN' OR 'DETACH').");
}

// spinlock??? bucle para sincronizar el comienzo de los philos???
void	waiting_threads(t_table *table)
{
	while (!get_bool(&table->table_mutex, &table->threads_ready))
		;
}

// aqui vamos a ir contando los hilos que estan corriendo.
void	threads_counter(pthread_mutex_t *mutex, long *cont)
{
	mutex_handle(mutex, LOCK);
	(*cont)++;
	mutex_handle(mutex, UNLOCK);
}
 
bool	threads_ready(pthread_mutex_t *mutex, long *threads_ready, long *philos)
{
	bool value;
	
	value = false;
	mutex_handle(mutex, LOCK);
	if (*threads_ready == philos)
		value = true;
	mutex_handle(mutex, UNLOCK);
	return (value);
}