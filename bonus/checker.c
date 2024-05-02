/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: useraccount <useraccount@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:08:15 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/02 13:44:10 by useraccount      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	cheacker_sort(t_stack **head)
{
	t_stack	*tmp;

	tmp = (*head);
	while (tmp->next)
	{
		if (!((tmp->cont) > (tmp->next->cont)))
		{
			ft_printf("KO\n");
			break ;
		}
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
		ft_printf("OK\n");
	return ;
}

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
		print_error(1, a);
}

void	checker(t_stack **a, t_stack **b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		checker_generete(a, b, str);
		free(str);
		str = get_next_line(0);
	}
	cheacker_sort(a);
}

int	main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;

	a = NULL;
	b = NULL;
	if (ac > 2)
	{
		_push(&a, ac, av);
		parrss(&a);
		checker(&a, &b);
		free_stack(&a);
	}
	else
		exit(1);
}