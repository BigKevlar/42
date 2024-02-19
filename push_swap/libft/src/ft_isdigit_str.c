/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevlar <kevlar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:08:04 by jmartos-          #+#    #+#             */
/*   Updated: 2024/02/19 16:24:49 by kevlar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit_str(char *str)
{
	int	cont;

	cont = 0;
	if (str == NULL)
		return (0);
	while (str[cont])
	{
		if (str[cont] >= '0' && str[cont] <= '9')
			cont++;
		else
			return (0);
	}
	return (1);
}
