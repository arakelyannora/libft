/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:49:19 by narakely          #+#    #+#             */
/*   Updated: 2021/01/28 15:19:20 by narakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t len)
{
	unsigned int	i;
	unsigned char	c1;
	unsigned char	*dest;

	i = 0;
	c1 = c;
	dest = destination;
	while (i < len)
	{
		dest[i] = c1;
		i++;
	}
	return (destination);
}
