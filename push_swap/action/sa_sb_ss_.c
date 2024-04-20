#include "../push_swap.h"

void ft_swap(long *a, long *b)
{
    long tmp;
    tmp = 0;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void sa(t_stack **a)
{
    if (*a != NULL && (*a)->next != NULL) {
        ft_swap(&((*a)->cont), &((*a)->next->cont));
    }
}

void sb(t_stack **b)
{
    if (*b != NULL && (*b)->next != NULL) {
        ft_swap(&((*b)->cont), &((*b)->next->cont));
    }
}

void ss(t_stack **a, t_stack **b)
{
    sa(&(*a));
    sb(&(*b));
     
}