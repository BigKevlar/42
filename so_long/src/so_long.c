/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos <jmartos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:31:51 by jmartos           #+#    #+#             */
/*   Updated: 2024/04/12 19:26:40 by jmartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int ac, char **av)
{
	t_game	*game;
	int		c;

	c = 0;
	parse_args(ac, av);
	game = get_map(av[1]);
	parse_ext(av[1], game);
	
	while (game->map[c] != NULL)
		ft_printf("%s", game->map[c++]);
	ft_printf("\nROWS: %i", game->rows);
	ft_printf("\nCOLUMNS: %i", game->columns);
	free_error("", game);
	return (0);
}
