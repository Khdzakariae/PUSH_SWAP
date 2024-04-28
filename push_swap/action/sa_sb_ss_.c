/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss_.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:49:47 by zel-khad          #+#    #+#             */
/*   Updated: 2024/04/28 18:49:57 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(long *a, long *b)
{
	long	tmp;

	tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sa(t_stack **a)
{
	if (*a != NULL && (*a)->next != NULL)
	{
		ft_swap(&((*a)->cont), &((*a)->next->cont));
	}
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	if (*b != NULL && (*b)->next != NULL)
	{
		ft_swap(&((*b)->cont), &((*b)->next->cont));
	}
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	sa(&(*a));
	sb(&(*b));
	ft_printf("ss\n");
}
