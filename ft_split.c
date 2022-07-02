/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:24:29 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/10 14:35:43 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	lenword(char const *s, char c, int a)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (a)
	{
		if (s[i] == c && s[i + 1] != c)
			a--;
		i++;
	}
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	*copyword(char const *s, char c, int a)
{
	char	*wordcpy;
	int		i;
	int		j;

	i = 0;
	j = 0;
	wordcpy = (char *)malloc(sizeof(char) * lenword(s, c, a) + 1);
	if (!wordcpy)
		return (NULL);
	while (s[i] == c)
		i++;
	while (a)
	{
		if (s[i] == c && s[i + 1] != c)
			a--;
		i++;
	}
	while (s[i] && s[i] != c)
	{
		wordcpy[j] = s[i];
		j++;
		i++;
	}
	wordcpy[j] = '\0';
	return (wordcpy);
}

static void	freenew(char **new)
{
	int	i;

	i = 0;
	while (new[i])
	{
		free(new[i]);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		cases;
	char	**new;

	if (!s)
		return (NULL);
	cases = countword(s, c);
	new = (char **)malloc(sizeof(char *) * (cases + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < cases)
	{
		new[i] = copyword(s, c, i);
		if (!new[i])
		{
			freenew(new);
			free(new);
			return (NULL);
		}
		i++;
	}
	new[i] = 0;
	return (new);
}
