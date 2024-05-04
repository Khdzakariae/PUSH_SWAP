/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errores.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:52:18 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/04 12:11:44 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	exit_(char **numbers, t_stack **a)
{
	ft_putstr_fd(RED "ERROR\n", 2);
	free_stack(a);
	free(numbers);
	exit(12);
}

void	print_error(t_stack **a, int flag)
{
	if (flag == 0)
		ft_putstr_fd(RED "ERROR\n", 2);
	free_stack(a);
	exit(1);
}

void _checker_error(t_stack **a, t_stack **b, char *str)
{
	ft_putstr_fd(RED "ERROR\n", 2);
	free_stack(a);
	free_stack(b);
	free(str);
	exit(0);
}