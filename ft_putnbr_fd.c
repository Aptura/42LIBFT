/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:41:35 by kedavain          #+#    #+#             */
/*   Updated: 2021/03/24 14:52:24 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;
	long int	n1;

	n1 = n;
	if (n < 0)
	{
		n1 *= -1;
		ft_putchar_fd('-', fd);
	}
	else if (n1 == 0)
		ft_putchar_fd('0', fd);
	i = 1;
	while (n1 / i != 0)
		i *= 10;
	while (i != 1)
	{
		i /= 10;
		ft_putchar_fd((n1 % (10 * i) - n1 % i) / i + '0', fd);
	}
}
