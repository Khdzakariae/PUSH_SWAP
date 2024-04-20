#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

// =========== print colors ===============//

#define RED          "\x1b[31m"

// ========================================//

#include "resources/libft/libft.h"
#include "resources/ft_printf/ft_printf.h"

typedef struct s_stack
{
	long		    cont;
	struct s_stack	*next;
}	t_stack;


void _free(t_stack **head);
void add_node(t_stack **head, int data);
int cheack_repet(t_stack *data, int sise);
void ft_swap(long *a, long *b);




void sa(t_stack **a);
void sb(t_stack **b);
void ss(t_stack **a, t_stack **b);
void pb(t_stack **b ,t_stack **a);
void pa(t_stack **b ,t_stack **a);
void ra(t_stack **a);
void rb(t_stack **b);
void rr(t_stack **a, t_stack **b);
void rra(t_stack **a);
void rrb(t_stack **b);
void rrr(t_stack **b, t_stack **a);


void print_error(int i);
int cheack(int *values, int sise, char **av);


#endif