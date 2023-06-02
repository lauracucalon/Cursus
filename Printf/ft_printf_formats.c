/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_formats.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:33:20 by lacucalo          #+#    #+#             */
/*   Updated: 2023/06/02 16:33:29 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putcharp(int c, size_t *i)
{
	write(1, &c, 1);
	(*i)++;
}

void	ft_putstrp(char *str, size_t *i)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putcharp(*str, i);
		str++;
	}
}

void	ft_putnbrp(int n, size_t *i)
{
	if (n == -2147483648)
	{
		ft_putstrp("-2147483648", i);
		return ;
	}
	if (n < 0)
	{
		ft_putcharp('-', i);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbrp(n / 10, i);
		ft_putcharp(n % 10 + '0', i);
	}
	else
		ft_putcharp(n + '0', i);
}

void	ft_putunsigp(unsigned int n, size_t *i)
{
	if (n < 0)
		n = n * -1;
	if (n >= 10)
	{
		ft_putnbrp(n / 10, i);
		ft_putcharp(n % 10 + '0', i);
	}
	else
		ft_putcharp(n + '0', i);
}

void	ft_puthexp(unsigned long int n, char *base, size_t *i)
{
	char	c;

	if (n < 16)
	{
		c = base[n];
		ft_putcharp(c, i);
	}
	if (n >= 16)
	{
		c = base[n % 16];
		n = n / 16;
		ft_puthexp(n, base, i);
		ft_putcharp(c, i);
	}
}
