/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:23:06 by jmartos-          #+#    #+#             */
/*   Updated: 2023/08/18 16:24:04 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* NOTAS */
/*
- Con el comandos "ulimit -a" podemos ver los limites del sistema para
el usuario que esta en uso (muy util para ver el maximo de fd.
*/

/* LEER */
static char	*reading_fd(int fd, char *text)
{
	char	*buffer;
	int		bytes;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes = 1;
	while ((!text || !gnl_strchr(text, '\n')) && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == 0)
			break ;
		else if (bytes < 0)
			return (free(text), free(buffer), NULL);
		buffer[bytes] = '\0';
		text = gnl_strjoin(text, buffer);
		if (!text)
			text = gnl_strdup(buffer);
	}
	free(buffer);
	return (text);
}

/* IMPRIMIR */
static char	*printing_line(char *text)
{
	char	*line;
	int		counter;

	line = malloc(sizeof(char) * gnl_strlen(text) + 1);
	if (!line)
		return (NULL);
	counter = 0;
	while (text[counter] && text[counter] != '\n')
	{
		line[counter] = text[counter];
		counter++;
	}
	if (text[counter] == '\n')
	{
		line[counter] = '\n';
		counter++;
	}
	line[counter] = '\0';
	return (line);
}

/* ACTUALIZAR */
static char	*updating_text(char *text)
{
	char	*str;
	int		cont1;
	int		cont2;

	cont1 = 0;
	cont2 = 0;
	while (text[cont1] && text[cont1] != '\n')
		cont1++;
	if (text[cont1])
		cont1++;
	if (!text[cont1])
		return (free(text), NULL);
	str = malloc(sizeof(char) * (gnl_strlen(text) - cont1 + 1));
	if (!str)
		return (NULL);
	while (text[cont1])
	{
		str[cont2] = text[cont1];
		cont1++;
		cont2++;
	}
	str[cont2] = '\0';
	free(text);
	return (str);
}

/* FUNCION PRINCIPAL */
char	*get_next_line(int fd)
{
	static char	*text;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	text = reading_fd(fd, text);
	if (!text)
		return (NULL);
	line = printing_line(text);
	text = updating_text(text);
	return (line);
}

/* CHECK DE LEAKS DE MEMORIA */
/*
void leaks()
{
	system("leaks -q prueba > leaks.txt");
}
*/

/* MAIN DE PRUEBA */
/*
int	main(void)
{
	int		fd;
	char	*content;

	fd = open("/Users/jmartos-/Documents/42/get_next_line/prueba.txt", O_RDONLY);
//	atexit(leaks);
	content = get_next_line(fd);
	while (content != NULL)
	{
		printf("%s", content);
		free(content);
		content = get_next_line(0);
	}
	close(fd);
	return (0);
}
*/