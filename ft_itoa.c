/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:42:53 by narakely          #+#    #+#             */
/*   Updated: 2021/01/30 14:49:36 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_length(int n)
{
	int length;

	length = 0;
	if (n < 0)
		length++;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static	void	ft_str(char *str, int *n, int length)
{
	if (*n < 0)
		*n *= -1;
	str += length + 1;
	*str = '\0';
	str--;
	while (*n)
	{
		*str = (*n % 10) + 48;
		str--;
		*n /= 10;
	}
}

char			*ft_itoa(int n)
{
	int		length;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		if (str == NULL)
			return (NULL);
		*str = 48;
		return (str);
	}
	length = ft_length(n);
	str = (char*)malloc(length + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		*str = '-';
	length--;
	ft_str(str, &n, length);
	return (str);
}
