/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:51:58 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/30 16:54:34 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 100

# endif

# ifndef FD_MAX
#  define FD_MAX 1024

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
