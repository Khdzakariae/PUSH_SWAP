/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errores.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:52:18 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/03 11:24:26 by zel-khad         ###   ########.fr       */
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

void	print_error(t_stack **a)
{
	ft_putstr_fd(RED "ERROR\n", 2);
	free_stack(a);
	exit(1);
}