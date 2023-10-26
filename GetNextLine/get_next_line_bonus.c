/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:51:42 by lacucalo          #+#    #+#             */
/*   Updated: 2023/10/23 13:20:14 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	static char	*saved[FD_MAX];
	char		*line;
	ssize_t		countbytes;
	char		temp[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	countbytes = 1;
	while (!(ft_strchr(saved[fd], '\n')) && countbytes > 0)
	{
		countbytes = read(fd, temp, BUFFER_SIZE);
		if (countbytes < 0)
			return (free(saved[fd]), saved[fd] = NULL, NULL);
		temp[countbytes] = '\0';
		saved[fd] = sol_saved(saved[fd], temp);
		if (!saved[fd])
			return (NULL);
	}
	line = new_line(saved[fd]);
	saved[fd] = del_line(saved[fd]);
	return (line);
}

// int	main(void)
// {
// 	int		fd;
// 	int		fd2;
// 	char	*line;
// 	char	*line2;

// 	fd = open("text.txt", O_RDONLY);
// 	fd2 = open("text2.txt", O_RDONLY);
// 	line = get_next_line(fd);
// 	printf("Línea:%s", line);
// 	free (line);
//     fd2 = open("text2.txt", O_RDONLY);
// 	line2 = get_next_line(fd2);
// 	printf("Línea:%s", line2);
// 	free (line2);
// 	line = get_next_line(fd);
// 	printf("Línea:%s", line);
// 	line2 = get_next_line(fd2);
// 	printf("Línea:%s", line2);
// 	free (line2);
// 	close (fd);
// 	close (fd2);
// 	return (0);
// }
