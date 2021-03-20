/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:22:21 by narakely          #+#    #+#             */
/*   Updated: 2021/01/30 17:44:14 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	temp = *lst;
	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = new;
		}
	}
}
