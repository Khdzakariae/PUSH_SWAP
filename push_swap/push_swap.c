/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:16:55 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/01 20:01:15 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	print_list(t_stack *lst)
{
	while (lst != NULL)
	{
		printf("the list is : %ld \n", lst->cont);
		lst = lst->next;
	}
	printf("\n");
}

void	free_stack(t_stack **stack)
{
	t_stack	*current;
	t_stack	*next;

	current = *stack;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	long	*tab;

	a = NULL;
	b = NULL;
	if (ac > 2)
	{
		_push(&a, ac, av);
		parrss(a);
		tab = convert(a);
		sort(tab, a->len);
		push_swap(&a, &b, tab);
		free_stack(&a);
		free(tab);
		tab = NULL;
	}
	else
		print_error(1);
}
