/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:16:25 by jmartos-          #+#    #+#             */
/*   Updated: 2023/08/31 15:03:35 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h" /* Libreria 42 "jmartos-". */

/* Convierte un caracer alfabetico de minuscula a mayuscula. */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

/*
int main(void)
{
	char	word = 'a';
	char	result = ft_toupper(word);

	printf("Carácter original: %c\n", word);
	printf("Carácter convertido: %c\n", result);
	return 0;
}
*/