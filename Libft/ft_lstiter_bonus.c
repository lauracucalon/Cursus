/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lacucalo <lacucalo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:20:17 by lacucalo          #+#    #+#             */
/*   Updated: 2023/05/05 14:08:23 by lacucalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list	*lst, void (*f)(void	*))
{
	if (lst && f)
	{
		while (lst->next != 0)
		{
			f(lst->content);
			lst = lst->next;
		}
		f(lst->content);
	}
}
