/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:24:50 by narakely          #+#    #+#             */
/*   Updated: 2021/01/27 15:28:26 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int			i;
	char		*substr;

	i = 0;
	substr = (char*)malloc(len + 1);
	if (substr != NULL)
	{
		while (len && s[start])
		{
			substr[i] = s[start];
			len--;
			start++;
			i++;
		}
		substr[i] = '\0';
		return (substr);
	}
	return (NULL);
}
