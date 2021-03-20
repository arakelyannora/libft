/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:01:18 by narakely          #+#    #+#             */
/*   Updated: 2021/01/28 17:26:36 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	unsigned const char	*srce;
	unsigned char		c1;

	dest = dst;
	srce = src;
	c1 = c;
	while (n)
	{
		*dest = *srce;
		if (*dest == c1)
			return (dst + 1);
		dest++;
		dst++;
		srce++;
		n--;
	}
	return (NULL);
}
