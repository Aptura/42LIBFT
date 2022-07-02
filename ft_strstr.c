/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 14:44:46 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/04 14:45:39 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	int		i;
	int		j;

	i = 0;
	if (!*needle)
		return (haystack);
	while (*(haystack + i))
	{
		j = 0;
		while (*(needle + j) == *(haystack + i + j))
		{
			if (!*(needle + j + 1))
			{
				return (haystack + i);
			}
			j++;
		}
		i++;
	}
	return ((char *)0);
}
