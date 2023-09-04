/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:45:02 by jmartos-          #+#    #+#             */
/*   Updated: 2023/09/04 16:25:17 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/* (Variable global) Vamos a usarla como "semaforo booleano" en el handler,
para que no se de el caso en el que se hace un kill sin que el cliente haya
terminado procesar el anterior aun. 0 es "espera", 1 es "pasa". */
int g_mutex = 0;

void	handler(int sig)
{
	static int	cont;

	g_mutex = 1;
	if (sig == SIGUSR1)
		ft_printf("Bits sent: %d\n", cont);
	else
		cont++;
	return ;
}

void	byte(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		g_mutex = 0;
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		while (g_mutex == 0)
			usleep(1);
		bit++;
	}
	return ;
}

void	send(int pid, char *str)
{
	int	cont;

	cont = 0;
	while (str[cont])
	{
		byte(pid, str[cont]);
		cont++;
	}
	byte(pid, '\0');
	return ;
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
	{
		ft_printf("Arguments ERROR\n");
		return (0);
	}
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	pid = ft_atoi(argv[1]);
	send(pid, argv[2]);
	return (0);
}