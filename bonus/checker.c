/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:08:15 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/03 12:16:07 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	cheacker_sort(t_stack **head, t_stack **b)
{
	t_stack	*tmp;

	tmp = (*head);
	if (!(*head))
	{
		ft_printf("KO\n");
		return ;
	}
	while (tmp->next)
	{
		if (!((tmp->cont) < (tmp->next->cont)))
		{
			ft_printf("KO\n");
			break ;
		}
		tmp = tmp->next;
	}
	if ((*b) != NULL)
		ft_printf("KO\n");
	else if (tmp->next == NULL)
		ft_printf("OK\n");
	return ;
}

void	checker_generete(t_stack **a, t_stack **b, char *str)
{
	if (ft_strcmp(str, "pa\n") == 0)
		pa(b, a, 0);
	else if (ft_strcmp(str, "pb\n") == 0)
		pb(b, a, 0);
	else if (ft_strcmp(str, "ra\n") == 0)
		ra(a, 0);
	else if (ft_strcmp(str, "rb\n") == 0)
		rb(b, 0);
	else if (ft_strcmp(str, "rr\n") == 0)
		rr(b, a, 0);
	else if (ft_strcmp(str, "rra\n") == 0)
		rra(a, 0);
	else if (ft_strcmp(str, "rrb\n") == 0)
		rrb(b, 0);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rrr(b, a, 0);
	else if (ft_strcmp(str, "sa\n") == 0)
		sa(a, 0);
	else if (ft_strcmp(str, "sb\n") == 0)
		sb(b, 0);
	else if (ft_strcmp(str, "ss\n") == 0)
		ss(a, b, 0);
	else
		print_error(a, 0);
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
	cheacker_sort(a, b);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac > 2)
	{
		_push(&a, ac, av);
		parrss(&a, 0);
		checker(&a, &b);
		free_stack(&a);
	}
	else
		exit(1);
}
