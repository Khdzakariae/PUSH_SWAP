/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:56:26 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/02 09:45:55 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_numer_2(t_stack **a)
{
	if ((*a)->cont > (*a)->next->cont)
		sa(&(*a), 1);
	else
		return ;
}

void	sort_numer_3(t_stack **a)
{
	t_stack	*big;

	big = searching_biggest(*a);
	if (*a == big)
		ra(&(*a), 1);
	else if ((*a)->next == big)
		rra(&(*a), 1);
	if ((*a)->cont > (*a)->next->cont)
		sa(a, 1);
}

void	sort_numer_5(t_stack **a, t_stack **b)
{
	t_stack	*min;
	int		i;
	t_stack	*tmp;

	i = 0;
	while (i < 2)
	{
		tmp = (*a);
		min = searching_minimum(tmp);
		while (*a != min)
		{
			if ((min->index) <= (((tmp)->len / 2)))
				ra(a, 1);
			else if ((min->index) > (((tmp)->len / 2)))
				rra(a, 1);
		}
		pb(b, a, 1);
		i++;
	}
	sort_numer_3(a);
	while (*b != NULL)
		pa(b, a, 1);
}

void	push_swap(t_stack **a, t_stack **b, long *tab)
{
	len(*a);
	if ((*a)->len == 2)
		sort_numer_2(a);
	else if ((*a)->len == 3)
		sort_numer_3(a);
	else if ((*a)->len == 5)
		sort_numer_5(a, b);
	else
		sort_numer(a, b, tab, (*a)->len - 1);
}
