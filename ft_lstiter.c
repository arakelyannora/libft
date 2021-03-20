/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:18:03 by narakely          #+#    #+#             */
/*   Updated: 2021/01/30 18:20:08 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	t_list *temp;

	if (lst)
	{
		while (lst)
		{
			temp = lst->next;
			f(lst->content);
			lst = temp;
		}
	}
}
