/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:54:45 by narakely          #+#    #+#             */
/*   Updated: 2021/01/29 15:50:58 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int length;

	length = ft_strlen(str);
	while (length + 1)
	{
		if (str[length] == ch)
			return ((char*)(str + length));
		length--;
	}
	return (NULL);
}
