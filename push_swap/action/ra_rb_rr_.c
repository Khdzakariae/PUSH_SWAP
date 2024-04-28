/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr_.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:48:59 by zel-khad          #+#    #+#             */
/*   Updated: 2024/04/28 18:49:01 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*tr;

	tmp = *a;
	tr = *a;
	*a = (*a)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	add_node(&(*a), tr->cont);
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tr;

	tmp = *b;
	tr = *b;
	*b = (*b)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	add_node(&(*b), tr->cont);
	ft_printf("rb\n");
}

void	rr(t_stack **b, t_stack **a)
{
	ra(&(*a));
	rb(&(*b));
	ft_printf("rr\n");
}
