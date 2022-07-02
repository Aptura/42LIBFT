/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 12:00:16 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/07 12:17:46 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*s1;
	size_t	j;

	s1 = NULL;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		s1 = ft_calloc(sizeof(char *), 1);
		if (!s1)
			return (NULL);
		return (s1);
	}
	j = 0;
	s1 = ft_calloc(sizeof(char), n + 1);
	if (!(s1))
		return (NULL);
	while (j < n)
		s1[j++] = s[start++];
	s1[j] = '\0';
	return (s1);
}
