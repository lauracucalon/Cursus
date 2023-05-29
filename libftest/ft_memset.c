/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:06:14 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/04 15:41:28 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*s = c;
		s++;
		i++;
	}
	return (b);
}

// int main (void)
// {
//     char str[] = "pito";
//     int c = 35;
//     size_t l = 3;

//     //printf("%s", memset(str, c, l));
//     printf("%s", ft_memset(str, c, l));
//     return(0);
// }
