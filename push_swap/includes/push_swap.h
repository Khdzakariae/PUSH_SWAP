/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:51:06 by zel-khad          #+#    #+#             */
/*   Updated: 2024/04/28 18:51:08 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <unistd.h>

// =========== print colors ===============//

# define RED "\x1b[31m"

// ========================================//

# include "../resources/ft_printf/ft_printf.h"
# include "../resources/libft/libft.h"

typedef struct s_stack
{
	int				index;
	int				len;
	long			cont;
	int				top;
	struct s_stack	*next;
}					t_stack;

void				cheack_sort(t_stack *head);
void				cheack_repet(t_stack *head);
void				len(t_stack *head);
void				is_top(t_stack *head);
void				parrss(t_stack *a);

void				print_list(t_stack *lst);

void				add_node(t_stack **head, int data);
void				_push(t_stack **a, t_stack **b, int ac, char **av);
long				*convert(t_stack *a);
int					sort(long *tab, int len);

void				_free(t_stack **head);
void				ft_swap(long *a, long *b);

void				push_swap(t_stack **a, t_stack **b, long *tab);
void				sort_numer_2(t_stack **a);
void				sort_numer_3(t_stack **a);
void				sort_numer_5(t_stack **a, t_stack **b);
void				sort_numer(t_stack **a, t_stack **b, long *tab, int lent);

t_stack				*searching_biggest(t_stack *a);
t_stack				*searching_minimum(t_stack *a);

void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				pb(t_stack **b, t_stack **a);
void				pa(t_stack **b, t_stack **a);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **b, t_stack **a);

void				print_error(int i);
int					cheack(int *values, int sise, char **av);

#endif