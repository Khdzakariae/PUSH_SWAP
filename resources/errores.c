/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errores.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:52:18 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/02 11:32:57 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	exit_(char **numbers)
{
	free(*numbers);
	exit(12);
}

void	print_error(int i, t_stack **a)
{
	if (i == 1)
	{
		ft_putstr_fd(RED "ERROR\n", 2);
		free_stack(a);
		exit(1);
	}
	else if (i == 2)
	{
		ft_putstr_fd(RED "LARGUMANT EST REPETTE", 2);
		exit(1);
	}
	else if (i == 4)
	{
		ft_putstr_fd(RED "LARGUMANT VIDE !!", 2);
		exit(1);
	}
	else if (i == 5)
	{
		ft_putstr_fd(RED "LES ARGUMANT EST SORT !!!!", 2);
		exit(1);
	}
}
