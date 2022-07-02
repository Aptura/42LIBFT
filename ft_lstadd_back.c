/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedavain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:43:31 by kedavain          #+#    #+#             */
/*   Updated: 2021/04/14 11:43:34 by kedavain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*blst;

	if (!alst)
		return ;
	if (*alst)
	{
		blst = ft_lstlast(*alst);
		blst->next = new;
	}
	else
		*alst = new;
}
