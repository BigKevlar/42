/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:14:49 by kevlar            #+#    #+#             */
/*   Updated: 2023/04/25 15:11:15 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<ctype.h> /*LIBRERIA DE TODAS LAS FUNCIONES TIPO IS.*/
#include	<stdio.h> /*LIBRERIA PARA EL PRINTF DEL MAIN.*/

/*ESTA FUNCION COMPRUEBA SI UN CARACTER ES UN CARACTER ASCII.*/
int	ft_isascii(int x)
{
	if ((x >= 0 && x <= 127))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	x;

	x = 'h';
	printf("%d",ft_isalnum(x));
	return (0);
}
*/