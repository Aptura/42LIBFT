/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:47:06 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/07 10:02:12 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_nb(long int nb)
{
	size_t	i;

	i = 1;
	if (nb <= 0)
		nb = -nb;
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static int	isneg(long int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	long int		nb;

	nb = n;
	len = ft_len_nb(n);
	if (isneg(nb))
		len++;
	str = ft_calloc((len + 1), sizeof(*str));
	if (!str)
		return (NULL);
	if (isneg(nb))
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[len - 1] = '0';
	while (nb > 0)
	{
		str[--len] = nb % 10 + 48;
		nb /= 10;
	}
	return (str);
}
