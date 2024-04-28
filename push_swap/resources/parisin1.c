/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parisin1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:51:53 by zel-khad          #+#    #+#             */
/*   Updated: 2024/04/28 18:53:04 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	cheack_sort(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp->next)
	{
		if (!((tmp->cont) < (tmp->next->cont)))
			break ;
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
		print_error(5);
	return ;
}

void	cheack_repet(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (head->next)
	{
		tmp = head;
		while (tmp->next)
		{
			if ((head->cont) == (tmp->next->cont))
				print_error(3);
			tmp = tmp->next;
		}
		head = head->next;
	}
	return ;
}

void	len(t_stack *head)
{
	int		temp;
	t_stack	*tmp;

	temp = 0;
	tmp = head;
	while (tmp)
	{
		tmp = tmp->next;
		temp++;
	}
	(head)->len = temp;
}

void	is_top(t_stack *head)
{
	t_stack	*tmp;
	int		middle;
	int		i;

	tmp = head;
	len(head);
	middle = head->len / 2;
	i = 0;
	while (tmp)
	{
		tmp->index = i;
		if (i <= middle)
			tmp->top = 1;
		else if (i > middle)
			tmp->top = 1;
		tmp = tmp->next;
		i++;
	}
}

void	parrss(t_stack *a)
{
	cheack_repet(a);
	cheack_sort(a);
}
