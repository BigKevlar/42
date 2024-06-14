/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_set_control.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:55:12 by jmartos-          #+#    #+#             */
/*   Updated: 2024/06/14 22:51:18 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/*
	Aqui vamos a controlar los "getter" (coger) y los "setters" (fijar).
	Esto servira para cleancode, y no tener que estar usando LOCK/UNLOCK,
	haciendo uso de booleanos.
*/

void	set_bool(t_mtx *mutex, bool *new, bool value)
{
	mutex_handle(mutex, LOCK);
	*new = value;
	mutex_handle(mutex, UNLOCK);
}

bool	get_bool(t_mtx *mutex, bool *value)
{
	bool	new;

	mutex_handle(mutex, LOCK);
	*new = value;
	mutex_handle(mutex, UNLOCK);
}

void	set_long(t_mtx *mutex, long *new, long value)
{
	mutex_handle(mutex, LOCK);
	*new = value;
	mutex_handle(mutex, UNLOCK);
}

long	get_long(t_mtx *mutex, long *value)
{
	long	new;

	mutex_handle(mutex, LOCK);
	*new = value;
	mutex_handle(mutex, UNLOCK);
}

bool	simmulation_finish(t_table *table)
{
	return(get_bool(&table->table_mutex, &table->end_program));
}
