/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:18:15 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/05 15:23:03 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	i = len_dst;
	while (*src != '\0' && i < (dstsize - 1))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}

// int main(void)
// {
//     char dst[] = "chupa";
//     char src[] = "cabras";
//     size_t dstsize = 4;

//     printf("%s\n", dst);
//     printf("%s\n", src);
//     printf("%zu\n", ft_strlcat(dst, src, dstsize));    
// 	//devuelve el n de caracteres de chup + el dstsize
//     printf("%zu\n", dstsize);
//     printf("%s\n", dst);
//     printf("%s\n", src);
// }
