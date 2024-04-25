#include "../includes/push_swap.h"

void sort_numer_2(t_stack **a)
{
    if((*a)->cont > (*a)->next->cont)
        sa(&(*a));
}
void sort_numer_3(t_stack **a)
{
    t_stack *big = searching_biggest(*a);
    if(*a == big)
        ra(&(*a));
    else if((*a)->next == big)
        rra(&(*a));
    if((*a)->cont > (*a)->next->cont)
        sa(&(*a));
}

void sort_numer_5(t_stack **a, t_stack **b)
{
    
    t_stack *min = searching_minimum(*b);
    
}
