#include "../push_swap.h"

void pop_b(t_stack **b)
{
    if(!b)
        return;
    t_stack *temp;
    temp = *b;
    *b = (*b)->next;
    free(temp);
}

void pb(t_stack **b ,t_stack **a)
{
    if (!*a)
        return;
    t_stack *temp = malloc(sizeof(t_stack));

    temp->cont = (*a)->cont;
    temp->next = *b ;
    *b = temp;
    pop_b(&(*a));
}

void pa(t_stack **b ,t_stack **a)
{
    if (!*b)
        return;
    t_stack *temp = malloc(sizeof(t_stack));

    temp->cont = (*b)->cont;
    temp->next = *a ;
    *a = temp;
    pop_b(&(*b));
}

// void newlist(t_data **head, int nbr)
// {
//     t_data *temp  = malloc(sizeof(t_data));
//     temp->cont = nbr;
//     temp->next = NULL;
//     if (*head != NULL)
//         temp->next = *head;
//     *head = temp;

// }

void ra(t_stack **a)
{
    t_stack *tmp = *a;

    while(tmp->next->next != NULL)
        tmp  = tmp->next;

    tmp->next->next = *a;
    *a = tmp;
}

