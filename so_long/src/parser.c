/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos <jmartos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:51:56 by jmartos           #+#    #+#             */
/*   Updated: 2024/04/04 16:08:08 by jmartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// 
char	*get_ext(char *map)
{
	char	*ext;

	ext = ft_strrchr(map, '.');
	return (ext);
}

//
void	check_ext(char **av)
{
	char	*ext;

	ext = get_ext(av[1]);
	if (ext == NULL || ft_strncmp(ext, ".ber", 4) != 0)
		ft_putstr_fd("Error with arguments\n", 2);
}

void	parse_args(ac, av)
{
	
}
