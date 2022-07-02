/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 09:52:51 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/04 14:32:36 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	char	*ptr;
	size_t	res;
	size_t	i;

	res = (elementCount * elementSize);
	ptr = malloc(res);
	if (!ptr)
		return (NULL);
	i = 0;
	while (res--)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
