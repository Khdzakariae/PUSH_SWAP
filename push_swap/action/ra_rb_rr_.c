#include "../push_swap.h"

void newlist(t_stack **head, int nbr)
{
    t_stack *temp  = malloc(sizeof(t_stack));
    temp->cont = nbr;
    temp->next = NULL;
    if (*head != NULL)
        temp->next = *head;
    *head = temp;
}

void _free(t_stack **head)
{
    t_stack *tmp = *head;
    while(tmp->next->next != NULL)
        tmp  = tmp->next;
    t_stack *temp1 = tmp->next;
    tmp->next = temp1->next;
    free(temp1);
}

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

void rra(t_stack **a)
{
    t_stack *tmp = *a;
    while(tmp->next != NULL)
        tmp  = tmp->next;
    newlist(&(*a), tmp->cont);
    _free(&(*a));
}