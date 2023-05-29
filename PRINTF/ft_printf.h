/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:23:18 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/15 13:51:12 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int ft_printf(char const *str, ...);
void ft_format(va_list arg, char *str, size_t *i);

void ft_putchar(int c, size_t *i);
void ft_putstr(char *str, size_t *i);
void ft_putnbr(int n, size_t *i);
void ft_putunsig(unsigned int n, size_t *i);
void ft_puthex(unsigned long int n, char *base, size_t *i);

#endif
