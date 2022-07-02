/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 13:50:30 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/04 14:37:33 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s1trim;
	size_t		start;
	size_t		end;
	size_t		i;

	start = 0;
	end = 0;
	i = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && ft_charset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_charset(s1[end - 1], set))
		end--;
	s1trim = malloc(sizeof(*s1) * (end - start + 1));
	if (!(s1trim))
		return (NULL);
	while (start < end)
		s1trim[i++] = s1[start++];
	s1trim[i] = 0;
	return (s1trim);
}
