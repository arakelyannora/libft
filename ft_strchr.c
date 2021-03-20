/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:52:15 by narakely          #+#    #+#             */
/*   Updated: 2021/01/28 18:04:37 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int i;

	i = 0;
	if (ch == '\0' && *str == '\0')
		return ((char*)(str + ft_strlen(str)));
	if (*str == '\0')
		return (NULL);
	if (ch == '\0')
		return ((char*)(str + ft_strlen(str)));
	while (str[i])
	{
		if (str[i] == ch)
			return (char*)(str + i);
		i++;
	}
	return (NULL);
}
