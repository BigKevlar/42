/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:01:20 by jmartos-          #+#    #+#             */
/*   Updated: 2023/08/18 17:45:28 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	gnl_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*gnl_strchr(char *str, int chr)
{
	int		cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] == (char)chr)
			return ((char *)&str[cont]);
		cont++;
	}
	return (0);
}

char	*gnl_strjoin(char *str1, char *str2)
{
	char	*new_str;
	int		cont1;
	int		cont2;
	int		len1;
	int		len2;

	cont1 = 0;
	cont2 = 0;
	if (!str1 || !str2)
		return (NULL);
	len1 = gnl_strlen(str1);
	len2 = gnl_strlen(str2);
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new_str)
		return (NULL);
	while (cont1 < len1)
	{
		new_str[cont1] = str1[cont1];
		cont1++;
	}
	while (cont2 < len2)
		new_str[cont1++] = str2[cont2++];
	new_str[cont1] = '\0';
	free(str1);
	return (new_str);
}

size_t	gnl_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	cont;
	size_t	src_size;

	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	cont = 0;
	if (dst_size != 0)
	{
		while (src[cont] != '\0' && cont < (dst_size - 1))
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = '\0';
	}
	return (src_size);
}

char	*gnl_strdup(const char *s1)
{
	char	*new_array;
	int		len;

	len = gnl_strlen((char *)s1) + 1;
	new_array = malloc(len);
	if (!new_array)
		return (NULL);
	gnl_strlcpy(new_array, s1, len);
	new_array[len - 1] = '\0';
	return (new_array);
}
