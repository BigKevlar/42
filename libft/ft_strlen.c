/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:02:48 by jmartos-          #+#    #+#             */
/*   Updated: 2023/05/02 11:23:30 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h" /*LIBRERIA CUSTOM*/

/*ESTA FUNCION DEVUELVE LA LONGUITUD DE UN STRING.*/
int	ft_strlen(const char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n = n + 1;
	}
	return (n);
}
