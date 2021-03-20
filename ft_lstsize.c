/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:04:32 by narakely          #+#    #+#             */
/*   Updated: 2021/01/30 17:17:01 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		length;
	t_list	*temp;

	length = 0;
	temp = lst;
	if (temp == NULL)
		return (length);
	while (temp->next != NULL)
	{
		length++;
		temp = temp->next;
	}
	if (temp->next == NULL)
		length++;
	return (length);
}
