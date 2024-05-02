/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:08:15 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/02 10:45:38 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	checker_generete(t_stack **a, t_stack **b, char *str)
{
	if (ft_strcmp(str, "pa"))
		pa(b, a, 0);
	else if (ft_strcmp(str, "pb"))
		pb(b, a, 0);
	else if (ft_strcmp(str, "ra"))
		ra(a, 0);
	else if (ft_strcmp(str, "rb"))
		rb(b, 0);
	else if (ft_strcmp(str, "rr"))
		rr(b, a, 0);
	else if (ft_strcmp(str, "rra"))
		rra(a, 0);
	else if (ft_strcmp(str, "rrb"))
		rrb(b, 0);
	else if (ft_strcmp(str, "rrr"))
		rrr(b, a, 0);
	else if (ft_strcmp(str, "sa"))
		sa(a, 0);
	else if (ft_strcmp(str, "pb"))
		sb(b, 0);
	else if (ft_strcmp(str, "ss"))
		ss(a, b, 0);
	else
		print_error(1, *a);
}

void	checker(t_stack **a, t_stack **b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		checker_generete(*a, *b, str);
		free(str);
		str = get_next_line(0);
	}
	if ()
}

int	main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	long *tab;

	a = NULL;
	b = NULL;
	if (ac > 2)
	{
		_push(&a, ac, av);
		parrss(a);
		tab = convert(a);
		sort(tab, a->len);
		checker(&a, &b);
		free_stack(&a);
		free(tab);
		tab = NULL;
	}
	else
		exit(1);
}