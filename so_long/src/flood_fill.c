/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos <jmartos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 00:08:34 by jmartos           #+#    #+#             */
/*   Updated: 2024/04/22 17:46:41 by jmartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

//
void	player_position(t_game *game)
{
	int	c1;
	int	c2;

	c1 = 0;
	while (game->map_copy[c1])
	{
		c2 = 0;
		while (game->map_copy[c1][c2])
		{
			if (game->map_copy[c1][c2] == 'P')
			{
				game->pos_x = c1;
				game->pos_y = c2;
				return ;
			}
			c2++;
		}
		c1++;
	}
}

//
void	flood_fill(t_game *game, int x, int y)
{
	if (x < 0 || y < 0 || x >= game->columns || y >= game->rows
		|| game->map[x][y] == '1' || game->map_copy[x][y] == 'X')
		return ;
	if (game->map[x][y] == 'C')
		game->acc_coins++;
	if (game->map[x][y] == 'E')
		game->acc_exits++;
	game->map_copy[x][y] = 'X';
	flood_fill(game, x - 1, y);
	flood_fill(game, x + 1, y);
	flood_fill(game, x, y - 1);
	flood_fill(game, x, y + 1);
}
