/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:21:08 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/05 13:54:24 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dstu;
	unsigned char	*srcu;

	dstu = (unsigned char *)dst;
	srcu = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		*dstu = *srcu;
		i++;
		dstu++;
		srcu++;
	}
	return (dst);
}

// int main(void)
// {
//     char src[] = "hola";
//     char dst[] = "adios";
//     printf("%s\n", ft_memcpy(dst, src, 2));
//     printf("%s", memcpy(dst, src, 2));
// }
