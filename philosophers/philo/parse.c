/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevlar <kevlar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 22:22:27 by jmartos-          #+#    #+#             */
/*   Updated: 2024/06/23 00:14:44 by kevlar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/*
	Input:	av[0] = programa
			av[1] = numeros_de_filosofos
			av[2] = tiempo_para_morir
			av[3] = tiempo_en_comer
			av[4] = tiempo_de_dormir
			av[5] = [limite_de_comidas] (opcional)
		Ej.:
							ms	ms	ms
			./philo		5	800	200 200 [5]
		
	Para convertir int (seg) a ms se tiene que multiplicar por 1000,
	que significa 10^3 o 1e3.
*/

static int	ft_check_int(long num)
{
	if (num > LONG_MAX || num < LONG_MIN)
		return (1);
	return (0);
}

int	check_int(char **av)
{
	if (ft_check_int(ft_atol(av[1])) 
	|| ft_check_int(ft_atol(av[2]))
	|| ft_check_int(ft_atol(av[3]))
	|| ft_check_int(ft_atol(av[4])))
	{
		error_exit(RED"ERROR WITH THE SIZE OF INT_MAX / INT_MIN!"RES);
		return (1);
	}
	if (av[5])
	{
		if (ft_check_int(ft_atol(av[5])))
		{
			error_exit(RED"ERROR WITH THE SIZE OF INT_MAX / INT_MIN!"RES);
			return (1);
		}
	}	
	return (0);
}

int	check_args(char **av)
{
	int	c1;
	int	c2;

	c1 = 1;
	while (av[c1])
	{
		c2 = 0;
		while (av[c1][c2])
		{
			if (av[c1][c2] < '0' || av[c1][c2] > '9')
			{
				printf(RED"ERROR IN ARGUMENTS!"RES);
				return (1);
			}
			c2++;
		}
		c1++;
	}
	return (0);
}
