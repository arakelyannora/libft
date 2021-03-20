/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:21:38 by narakely          #+#    #+#             */
/*   Updated: 2021/01/30 18:40:10 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*),
		void (*del)(void*))
{
	t_list *newlst;
	t_list *newel;

	if (!lst || !f)
		return (NULL);
	if (!(newel = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	newlst = newel;
	lst = lst->next;
	while (lst)
	{
		if (!(newel = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&newlst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&newlst, newel);
	}
	return (newlst);
}
