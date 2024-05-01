/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:56:26 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/01 19:59:18 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_numer_2(t_stack **a)
{
	if ((*a)->cont > (*a)->next->cont)
		sa(&(*a));
	else
		return ;
}

void	sort_numer_3(t_stack **a)
{
	t_stack	*big;

	big = searching_biggest(*a);
	if (*a == big)
		ra(&(*a));
	else if ((*a)->next == big)
		rra(&(*a));
	if ((*a)->cont > (*a)->next->cont)
		sa(a);
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
				ra(a);
			else if ((min->index) > (((tmp)->len / 2)))
				rra(a);
		}
		pb(b, a);
		i++;
	}
	sort_numer_3(a);
	while (*b != NULL)
		pa(b, a);
}

void	part2(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*big;

	tmp = *b;
	big = searching_biggest(*b);
	while (*b)
	{
		tmp = (*b);
		big = searching_biggest((tmp));
		len(tmp);
		if (*b != big)
		{
			if ((big->index) <= (((tmp)->len / 2)))
				rb(b);
			else if ((big->index) > (((tmp)->len / 2)))
				rrb(b);
		}
		if (*b == big)
			pa(b, a);
	}
}

void	determine_end_value(int lent, int *end)
{
	if (lent <= 10)
		*end = 2;
	else if (lent > 10 && lent <= 100)
		*end = 10;
	else if (lent > 100 && lent <= 500)
		*end = 35;
	else
		*end = 40;
}

void	update_indices(int *start, int *end, int lent)
{
	if (*end < lent)
	{
		(*start)++;
		(*end)++;
	}
}

void	sort_numer(t_stack **a, t_stack **b, long *tab, int lent)
{
	static int	start;
	int			end;
	t_stack		*tmp;

	determine_end_value(lent, &end);
	tmp = *a;
	while ((tmp))
	{
		if (((tmp)->cont >= tab[start] && (tmp)->cont <= tab[end]))
		{
			pb(b, a);
			update_indices(&start, &end, lent);
		}
		else if ((tmp)->cont < tab[start])
		{
			pb(b, a);
			rb(b);
			if (end < lent)
				update_indices(&start, &end, lent);
		}
		else
			ra(a);
		tmp = *a;
	}
	part2(a, b);
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
