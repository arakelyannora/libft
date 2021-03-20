/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:45:47 by narakely          #+#    #+#             */
/*   Updated: 2021/01/28 15:25:58 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)//
{
	const unsigned char *src1 = s1;
	const unsigned char *src2 = s2;

	while (n)
	{
		if (*src1 != *src2)
			return (*src1 - *src2);
		src1++;
		src2++;
		n--;
	}
	return (0);
}
