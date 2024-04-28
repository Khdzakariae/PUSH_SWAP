/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:48:38 by zel-khad          #+#    #+#             */
/*   Updated: 2024/04/28 18:48:41 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pop_b(t_stack **b)
{
	t_stack	*temp;

	if (!b)
		return ;
	temp = *b;
	*b = (*b)->next;
	free(temp);
}

void	pb(t_stack **b, t_stack **a)
{
	t_stack	*temp;

	if (!*a)
		return ;
	temp = malloc(sizeof(t_stack));
	temp->cont = (*a)->cont;
	temp->next = *b;
	*b = temp;
	pop_b(&(*a));
	ft_printf("pb\n");
}

void	pa(t_stack **b, t_stack **a)
{
	t_stack	*temp;

	if (!*b)
		return ;
	temp = malloc(sizeof(t_stack));
	temp->cont = (*b)->cont;
	temp->next = *a;
	*a = temp;
	pop_b(&(*b));
	ft_printf("pa\n");
}
