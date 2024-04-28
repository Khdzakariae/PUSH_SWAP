/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errores.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:52:18 by zel-khad          #+#    #+#             */
/*   Updated: 2024/04/28 18:52:22 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_error(int i)
{
	if (i == 2)
	{
		ft_putstr_fd(RED "ERROR NEMBER (enter des nembers valide)", 2);
		exit(1);
	}
	else if (i == 3)
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
