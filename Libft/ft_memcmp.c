/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:36:09 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/31 16:45:45 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (*str1 + 1 != '\0' || *str2 + 1 != '\0'))
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		i++;
		str1++;
		str2++;
	}
	return (0);
}

// int main(void)
// {
//     char s1[] = "ccccE";
//     char s2[] = "ccccF";

//     //printf("%d", memcmp(s1, s2, 5));
//     printf("%d", ft_memcmp(s1, s2, 5));

// }
