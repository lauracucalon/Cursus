/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:35:17 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/31 16:58:13 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

// int	main (void)
// {
// 	const char s[] = "hola k ase";
// 	int c = 'a';

// 	// printf("%s", strrchr(s, c));
// 	printf("%s", ft_strrchr(s, c));
// 	return (0);
// }
