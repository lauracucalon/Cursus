/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:21:03 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/15 13:50:40 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_format(va_list args, char *str, size_t *i)
{
    if(*str == 'c')
        ft_putchar(va_arg(args, int), i);
    else if (*str == 's')
        ft_putstr(va_arg(args, char *), i);
    else if (*str == 'p')
    {
        ft_putstr("0x", i);
        ft_puthex(va_arg(args, unsigned long int), "0123456789abcdef", i);
    }
    else if ((*str == 'd') || (*str == 'i'))
        ft_putnbr(va_arg(args, int), i);
    else if (*str == 'u')
        ft_putunsig(va_arg(args, unsigned int), i);
    else if (*str == 'x')
        ft_puthex(va_arg(args, unsigned int), "0123456789abcdef", i);
    else if (*str == 'X')
        ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF", i);
    else if (*str == '%')
        ft_putchar(*str, i);
}

// conversiones
// %c Imprime un solo carácter.
// %s Imprime una string (como se define por defecto en C).
// %p El puntero void * dado como argumento se imprime en formato hexadecimal.
// %d Imprime un número decimal (base 10).
// %i Imprime un entero en base 10.
// %u Imprime un número decimal (base 10) sin signo.
// %x Imprime un número hexadecimal (base 16) en minúsculas.
// %X Imprime un número hexadecimal (base 16) en mayúsculas.
// % % para imprimir el símbolo del porcentaje.

int	ft_printf(char const *str, ...)
{
    va_list args;
    size_t i;

    i = 0;
    va_start(args, str);
    if(!str)
        str = "NULL";
    while (*str)
    {
        if (*str == '%')
        {
            str++;
            ft_format(args, (char *)str, &i);
        }
        else
            ft_putchar(*str, &i);
        str++;
    }
    va_end(args);
    return(i);    
}
