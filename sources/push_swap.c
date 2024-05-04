/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:16:55 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/03 12:13:50 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	long	*tab;

	a = NULL;
	b = NULL;
	if (ac > 1)
	{
		_push(&a, ac, av);
		parrss(&a, 1);
		tab = convert(a);
		sort(tab, a->len);
		push_swap(&a, &b, tab);
		free_stack(&a);
		free(tab);
		tab = NULL;
	}
	else
		exit(1);
}
