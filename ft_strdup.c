/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:18:33 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/04 14:32:54 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*srcdup;
	int		i;

	i = 0;
	srcdup = (char *)ft_calloc(sizeof(char), ft_strlen((char *)src) + 1);
	if (!srcdup)
		return (NULL);
	if (!src)
		return (srcdup);
	while (src[i])
	{
		srcdup[i] = src[i];
		i++;
	}
	return (&*srcdup);
}
