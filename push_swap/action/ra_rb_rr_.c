/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr_.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: useraccount <useraccount@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:48:59 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/01 13:23:42 by useraccount      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ra(t_stack **a)
{
    t_stack *tmp;
    t_stack *tr;

    if (*a == NULL || (*a)->next == NULL)
        return;
    
    tmp = *a;
    tr = *a;
    *a = (*a)->next;
    
    while (tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = tr;
    tr->next = NULL;

    ft_printf("ra\n");
}


void	rb(t_stack **b)
{
    t_stack *tmp;
    t_stack *tr;

    if (*b == NULL || (*b)->next == NULL)
        return;
    
    tmp = *b;
    tr = *b;
    *b = (*b)->next;
    
    while (tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = tr;
    tr->next = NULL;

    ft_printf("rb\n");
}

void	rr(t_stack **b, t_stack **a)
{
	ra(&(*a));
	rb(&(*b));
	ft_printf("rr\n");
}
