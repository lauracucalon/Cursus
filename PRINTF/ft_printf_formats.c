/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_formats.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:33:20 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/29 12:45:38 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putchar(int c, size_t *i)
{
    write(1, &c, 1);
    (*i)++;
}

void ft_putstr(char *str, size_t *i)
{
    while(*str)
    {
        ft_putchar(*str, i);
        str++;
    }
}

void ft_putnbr(int n, size_t *i)
{
    if(n == -2147483648)
        ft_putstr("-2147483648", i);
    if(n < 0)
    {
        ft_putchar('-', i);
        n = n * -1;
    }
    if(n >= 10)
    {
        ft_putnbr(n / 10, i);
        ft_putchar(n % 10 + '0', i);
    }
    else
        ft_putchar(n + '0', i);
}

void ft_putunsig(unsigned int n, size_t *i)
{
    if(n < 0)
        n = n * -1;
    if(n >= 10)
    {
        ft_putnbr(n / 10, i);
        ft_putchar(n % 10 + '0', i);
    }
    else
        ft_putchar(n + '0', i);
}

void ft_puthex(unsigned long int n, char *base, size_t *i)
{
    char c;

    if(n < 16)
    {
        c = base[n];
        ft_putchar(c, i);
    }
    if(n >= 16)
    {
        c = base [n % 16];
        n = n / 16;
        ft_puthex(n, base, i);
        ft_putchar(c, i);
    }
}
