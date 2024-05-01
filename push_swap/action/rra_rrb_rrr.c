/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: useraccount <useraccount@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:49:22 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/01 13:28:15 by useraccount      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	newlist(t_stack **head, int nbr)
{
	t_stack	*temp;

	temp = malloc(sizeof(t_stack));
	temp->cont = nbr;
	temp->next = NULL;
	if (*head != NULL)
		temp->next = *head;
	*head = temp;
}

void	_free(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*temp1;

	tmp = *head;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	temp1 = tmp->next;
	tmp->next = temp1->next;
	free(temp1);
}

void	rra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*a || !(*a)->next)
		return ;
	ft_printf("rra\n");
	tmp = *a;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = *a;
	*a = last;
}

void	rrb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*b || !(*b)->next)
		return ;
	ft_printf("rrb\n");
	tmp = *b;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = *b;
	*b = last;
}

void	rrr(t_stack **b, t_stack **a)
{
	ft_printf("rrr\n");
	rra(&(*a));
	rrb(&(*b));
}
