#include "../push_swap.h"



void ra(t_stack **a)
{
    t_stack *tmp = *a;
    t_stack *tr = *a;
    *a = (*a)->next;
    while(tmp->next != NULL)
        tmp  = tmp->next;
    add_node(&(*a),tr->cont);
}

void rb(t_stack **b)
{
    t_stack *tmp = *b;
    t_stack *tr = *b;
    *b = (*b)->next;
    while(tmp->next != NULL)
        tmp  = tmp->next;
    add_node(&(*b),tr->cont);
}

void rr(t_stack **b, t_stack **a)
{
    ra(&(*a));
    rb(&(*b));
}

