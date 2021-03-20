/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:03:51 by narakely          #+#    #+#             */
/*   Updated: 2021/01/28 17:29:38 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned const char	*srce;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = dst;
	srce = src;
	if (dest > srce)
	{
		while (len)
		{
			dest[len - 1] = srce[len - 1];
			len--;
		}
	}
	else
		while (len)
		{
			*dest = *srce;
			dest++;
			srce++;
			len--;
		}
	return ((void *)dst);
}
// int main()
// {
// 	char s[] = "lorem ipsum dolor sit amet";
// 	char *dest = s + 1;
// 	char *res = ft_memmove(dest, s, 8);
// 	printf("%s\n", res);
// }