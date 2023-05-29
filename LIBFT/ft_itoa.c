/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:21:10 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/05 16:41:51 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_n(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	num;
	int			len;
	char		*str;

	num = n;
	len = ft_len_n(num);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		len--;
		str[len] = num % 10 + 48;
		num = num / 10;
	}
	return (str);
	free(str);
}

// int	main(void)
// {
// 	int n = 0;
// 	char *s;
// 	s = ft_itoa(n);
// 	printf("%s", s);
// 	return (0);
// }
