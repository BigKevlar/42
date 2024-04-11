/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos <jmartos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:31:51 by jmartos           #+#    #+#             */
/*   Updated: 2024/04/11 15:07:37 by jmartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int ac, char **av)
{
	t_game	game;
	int		i;

	(void)ac;

	i = 0;
	game = malloc(1 * sizeof(t_game));
	if (!game)
		free_error("ERROR AL CREAR ESTRUCTURA DEL MAPA", &game);
	ft_printf("%s\n", "breakpoint_1");
	get_map(av[1], &game);
	ft_printf("%s\n", "breakpoint_2");
	check_ext(av[1]);
	ft_printf("%s\n", "breakpoint_3");
	while (i < game.rows)
	{
		ft_printf("%s", game.map[i]);
		i++;
	}
	free_error("FIN", &game);
	free(game.map);
	return (0);
}
