/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:20:19 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/05 15:19:44 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;

	srcsize = 0;
	if (dstsize != 0)
	{
		while (src[srcsize] != '\0' && srcsize < dstsize - 1)
		{
			dst[srcsize] = src[srcsize];
			srcsize++;
		}
		dst[srcsize] = '\0';
	}
	while (src[srcsize] != '\0')
		srcsize++;
	return (srcsize);
}

// int main(void)
// {
//     char dst[] = "a";
//     char src[] = "lorem ipsum dolor sit amet";
//     size_t dstsize = 15;
//     printf("%s\n", dst);
//     printf("%s\n", src);
//     printf("%zu\n", ft_strlcpy(dst, src, dstsize));
//     printf("%s\n", dst);
//     printf("%s\n", src);
// }
