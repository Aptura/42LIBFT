/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 09:46:53 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/07 12:24:29 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_atoi(const char *nptr)
{
	long int	res;
	int			sign;

	res = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
	{
		sign *= -1;
		ft_putchar_fd('-', 1);
		nptr++;
	}
	else if (*nptr == '+' )
	{
		nptr++;
		ft_putchar_fd('+', 1);
	}
	while (ft_isdigit(*nptr) && *nptr)
	{
		res = res * 10 + *nptr - 48;
		nptr++;
	}
	return (sign * res);
}
