/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: useraccount <useraccount@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:08:15 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/02 13:56:25 by useraccount      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_stack *lst)
{
	while (lst != NULL)
	{
		printf("the list is : %ld \n", lst->cont);
		lst = lst->next;
	}
	printf("\n");
}

void	cheacker_sort(t_stack *head)
{
	t_stack	*tmp;

	tmp = (head);
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
	// printf("the str is |%s\n|", str);
	if (ft_strcmp(str, "pa") == 0)
		pa(b, a, 0);
	else if (ft_strcmp(str, "pb") == 0)
		pb(b, a, 0);
	else if (ft_strcmp(str, "ra") == 0)
		ra(a, 0);
	else if (ft_strcmp(str, "rb") == 0)
		rb(b, 0);
	else if (ft_strcmp(str, "rr") == 0)
		rr(b, a, 0);
	else if (ft_strcmp(str, "rra") == 0)
		rra(a, 0);
	else if (ft_strcmp(str, "rrb") == 0)
		rrb(b, 0);
	else if (ft_strcmp(str, "rrr") == 0)
		rrr(b, a, 0);
	else if (ft_strcmp(str, "sa") == 0)
	{
		// puts("============");
		exit(1);
		sa(a, 0);
	}
	else if (ft_strcmp(str, "pb") == 0)
		sb(b, 0);
	else if (ft_strcmp(str, "ss") == 0)
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
	print_list(*a);
	exit(1);
	cheacker_sort(*a);
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