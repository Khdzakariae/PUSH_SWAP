/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:51:06 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/04 12:06:12 by zel-khad         ###   ########.fr       */
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

# include "../sources/ft_printf/ft_printf.h"
# include "../sources/get_next_line/get_next_line.h"
# include "../sources/libft/libft.h"

typedef struct s_stack
{
	int				index;
	int				len;
	long			cont;
	int				top;
	struct s_stack	*next;
}					t_stack;

void _checker_error(t_stack **a, t_stack **b, char *str);
void				ft_swap(long *a, long *b);
void				pb(t_stack **b, t_stack **a, int flag);
void				pa(t_stack **b, t_stack **a, int flag);
void				ra(t_stack **a, int flag);
void				rb(t_stack **b, int flag);
void				rr(t_stack **b, t_stack **a, int flag);
void				rra(t_stack **a, int flag);
void				rrb(t_stack **b, int flag);
void				rrr(t_stack **b, t_stack **a, int flag);
void				sa(t_stack **a, int flag);
void				sb(t_stack **b, int flag);
void				ss(t_stack **a, t_stack **b, int flag);

void				exit_(char **numbers, t_stack **a);
void				print_error(t_stack **a, int flag);

void				cheack_sort(t_stack **head);
void				cheack_repet(t_stack **head);
void				len(t_stack *head);
void				is_top(t_stack *head);
void				parrss(t_stack **a, int flag);

t_stack				*searching_biggest(t_stack *a);
t_stack				*searching_minimum(t_stack *a);

void				part2(t_stack **a, t_stack **b);
void				update_indices(int *start, int *end, int lent);
void				determine_end_value(int lent, int *end);
void				sort_numer(t_stack **a, t_stack **b, long *tab, int lent);

void				sort_numer_2(t_stack **a);
void				sort_numer_3(t_stack **a);
void				sort_numer_5(t_stack **a, t_stack **b);
void				push_swap(t_stack **a, t_stack **b, long *tab);
void				add_node(t_stack **head, int data);
void				_push(t_stack **a, int ac, char **av);
long				*convert(t_stack *a);
int					sort(long *tab, int len);
void				free_stack(t_stack **stack);

#endif