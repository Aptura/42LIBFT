/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:46:31 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/04 14:31:59 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*find)
		return ((char *)src);
	while (src[i] && i < n)
	{
		j = 0;
		if (src[i] == find[j])
		{
			while (i + j < n && src[i + j] == find[j])
			{
				j++;
				if (!find[j])
					return ((char *)&src[i]);
			}
		}
		i++;
	}
	return (0);
}
