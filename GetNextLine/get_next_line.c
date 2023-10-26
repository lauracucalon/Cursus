/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:44:09 by lacucalo          #+#    #+#             */
/*   Updated: 2023/10/23 13:17:22 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*del_line(char *saved)
{
	char	*t;
	char	*aux;
	int		i;

	t = ft_strchr(saved, '\n');
	if (!t)
	{
		free(saved);
		return (NULL);
	}
	t++;
	aux = malloc(sizeof(char) * ft_strlen(t) + 1);
	if (!aux)
		return (NULL);
	i = 0;
	while (t[i] != '\0')
	{
		aux[i] = t[i];
		i++;
	}
	aux[i] = '\0';
	free(saved);
	return (aux);
}

char	*new_line(char *saved)
{
	int		i;
	char	*line;

	if (!saved || !*saved)
		return (NULL);
	i = 0;
	while (saved[i] != '\n' && saved[i] != '\0')
		i++;
	if (saved[i] == '\n')
		i++;
	line = malloc(sizeof(char) * i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (saved[i] != '\n' && saved[i] != '\0')
	{
		line[i] = saved[i];
		i++;
	}
	if (saved[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*sol_saved(char *saved, char *temp)
{
	char	*aux;

	if (!saved)
	{
		saved = malloc(1);
		saved[0] = 0;
	}
	if (!saved)
		return (NULL);
	aux = ft_strjoin(saved, temp);
	free(saved);
	return (aux);
}

char	*get_next_line(int fd)
{
	static char	*saved;
	char		*line;
	ssize_t		countbytes;
	char		temp[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	countbytes = 1;
	while (!(ft_strchr(saved, '\n')) && countbytes > 0)
	{
		countbytes = read(fd, temp, BUFFER_SIZE);
		if (countbytes < 0)
			return (free(saved), saved = NULL, NULL);
		temp[countbytes] = '\0';
		saved = sol_saved(saved, temp);
		if (!saved)
			return (NULL);
	}
	line = new_line(saved);
	saved = del_line(saved);
	return (line);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("text.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("Línea:%s", line);
// 	free (line);
// 	line = get_next_line(fd);
// 	printf("Línea:%s", line);
// 	free (line);
// 	line = get_next_line(fd);
// 	printf("Línea:%s", line);
// 	free (line);
// 	close (fd);
// 	return (0);
// }
