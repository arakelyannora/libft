/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:15:17 by narakely          #+#    #+#             */
/*   Updated: 2021/01/28 18:06:16 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			length;
	int			i;
	char		*newstr;

	i = 0;
	length = 0;
	while (*s1)
	{
		length++;
		s1++;
	}
	s1 -= length;
	newstr = malloc(length + 1);
	if (newstr != NULL)
	{
		while (length)
		{
			newstr[i] = s1[i];
			i++;
			length--;
		}
		newstr[i] = '\0';
		return (newstr);
	}
	return (NULL);
}
