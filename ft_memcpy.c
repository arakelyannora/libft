/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:56:23 by narakely          #+#    #+#             */
/*   Updated: 2021/01/28 15:20:29 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	unsigned const char	*srce;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = dst;
	srce = src;
	while (n)
	{
		*dest = *srce;
		dest++;
		srce++;
		n--;
	}
	return (dst);
}
