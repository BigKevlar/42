/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:01:48 by kevlar            #+#    #+#             */
/*   Updated: 2023/08/31 14:14:49 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h" /* Libreria 42 "jmartos-". */

/* Comprueba si un caracter "x" es alfanumerico. */
int	ft_isalnum(int x)
{
	if ((x >= '0' && x <= '9') || (x >= 'a' && x <= 'z')
		|| (x >= 'A' && x <= 'Z'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	if (ft_isalnum('F'))
		printf("El caracter SI es alfanumerico.\n");
	else
		printf("El caracter NO es alfanumerico.\n");
	return (0);
}
*/