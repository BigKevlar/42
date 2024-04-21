/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos <jmartos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:42:13 by jmartos           #+#    #+#             */
/*   Updated: 2024/04/20 22:12:02 by jmartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

//
static void	ft_charppfree(char **str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			free(str[i]);
			i++;
		}
	}
	free(str);
}

// Libera reservas de memoria del juego y cierre del mismo en caso de error.
void	free_error(char *msg, t_game *game)
{
	ft_printf("%s\n", msg);
	if (game != NULL)
		ft_charppfree(game->map);
	free(game);
	exit (1);
}

//
void	map_error(t_game *game)
{
	if (game->c_players < 1 || game->c_players > 1)
		free_error("ERROR, NO HAY JUGADORES O HAY DEMASIADOS", game);
	if (game->c_coins < 1)
		free_error("ERROR, NO HAY MONEDAS", game);
	if (game->c_exits < 1 || game->c_exits > 1)
		free_error("ERROR, NO HAY SALIDA O HAY DEMASIADAS", game);
}
