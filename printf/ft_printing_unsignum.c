/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printing_unsignum.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:14:30 by jmartos-          #+#    #+#             */
/*   Updated: 2023/07/17 18:13:16 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft/libft.h" /*LIBRERIA CUSTOM "jmartos-"*/

/* Imprime numeros enteros sin signo (%u). */
int	ft_printing_unsignum(unsigned int n)
{
	int				len;
	unsigned int	n_aux;

	len = 0;
	n_aux = n;
	while (n_aux > 0)
	{
		len++;
		n_aux = n_aux / 10;
	}
	ft_putnbr_fd(n, 1);
	return (len);
}

/* DESARROLLO */
/*  */