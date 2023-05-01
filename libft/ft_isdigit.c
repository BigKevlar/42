/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:47:15 by kevlar            #+#    #+#             */
/*   Updated: 2023/05/01 15:07:46 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h" /*LIBRERIA CUSTOM*/

/*ESTA FUNCION COMPRUEBA SI UN CARACTER ES NUMERICO.*/
int	ft_isdigit(int x)
{
	if ((x >= '0' && x <= '9'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	x;

	x = '4';
	printf("%d",ft_isdigit(x));
	return (0);
}
*/