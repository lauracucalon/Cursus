/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:23:18 by lacucalo          #+#    #+#             */
/*   Updated: 2023/06/02 16:34:01 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
void	ft_format(va_list arg, char *str, size_t *i);

void	ft_putcharp(int c, size_t *i);
void	ft_putstrp(char *str, size_t *i);
void	ft_putnbrp(int n, size_t *i);
void	ft_putunsigp(unsigned int n, size_t *i);
void	ft_puthexp(unsigned long int n, char *base, size_t *i);

#endif
