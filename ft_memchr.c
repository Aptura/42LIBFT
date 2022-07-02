/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 07:46:25 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/04 14:25:46 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *dst, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst2;

	i = 0;
	dst2 = (unsigned char *)dst;
	if (!c && !n)
		return (NULL);
	if (n == 1 && c == 0)
		return ((unsigned char *)dst);
	while (i < n)
	{
		if (dst2[i] == (unsigned char)c)
			return (dst2 + i);
		i++;
	}
	return (NULL);
}
