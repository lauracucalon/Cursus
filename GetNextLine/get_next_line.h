/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:05:11 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/30 16:54:41 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10000

# endif

# include <stdio.h>
# include <string.h> 
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdarg.h>
# include <fcntl.h>

char *get_next_line(int fd);
char *del_line(char *saved);
char *new_line(char *saved);
char *sol_saved(char *saved, char *temp);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
#endif
