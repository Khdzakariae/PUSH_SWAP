/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:49:22 by zel-khad          #+#    #+#             */
/*   Updated: 2024/04/28 18:49:34 by zel-khad         ###   ########.fr       */
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

	ft_printf("rra\n");
	tmp = *a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	newlist(&(*a), tmp->cont);
	_free(&(*a));
}

void	rrb(t_stack **b)
{
	t_stack	*tmp;

	if (!(*b))
		return ;
	tmp = *b;
	while (tmp->next != NULL)
		tmp = tmp->next;
	newlist(&(*b), tmp->cont);
	_free(&(*b));
	ft_printf("rrb\n");
}

void	rrr(t_stack **b, t_stack **a)
{
	ft_printf("rrr\n");
	rra(&(*a));
	rrb(&(*b));
}
