#include "../push_swap.h"

void cheack_sort(t_stack *head)
{
    t_stack *tmp = head;
    while(tmp->next)
    {
        if(!((tmp->cont) < (tmp->next->cont)))
            break;
        tmp = tmp->next;
    }
    if(tmp->next == NULL)
        print_error(5);
    return;
}


void cheack_repet(t_stack *head)
{
    t_stack *tmp = head;
    while(head->next)
    {
        tmp = head;
        while(tmp->next)
        {
            if((head->cont) == (tmp->next->cont))
                print_error(3);
            tmp = tmp->next;
        }
        head = head->next;
    }
    return;
}
