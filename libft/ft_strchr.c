/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:31:27 by jmartos-          #+#    #+#             */
/*   Updated: 2023/05/03 12:55:43 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h" /*LIBRERIA CUSTOM*/

/*ESTA FUNCION BUSCA UNA LETRA "C" DENTRO DE UN STRING "S".*/
char	*ft_strchr(const char *s, int c)
{
	s = ((char *)s);
	c = (char)c;
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (s);
}

/*
int	main(void)
{
	char	x[10] = "teste";
	char	c = '\0';

	printf("%s", ft_strchr(x, c));
	return (0);
}
*/
