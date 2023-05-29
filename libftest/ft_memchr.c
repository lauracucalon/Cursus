/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:20:34 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/05 13:48:08 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	d;
	size_t			i;

	str = (unsigned char *)s;
	d = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == d)
			return ((void *)str);
		i++;
		str++;
	}
	return (0);
}

// int main(void)
// {
//     //printf("%s", memchr("h#la", 35, 2));
//     printf("%s", ft_memchr("h#la", 35, 2));
//     return(0);
// }
