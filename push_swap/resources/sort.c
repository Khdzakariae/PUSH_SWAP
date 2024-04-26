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
void part2(t_stack **a, t_stack **b)
{
    is_top(*b);
    t_stack *big = searching_biggest(*b);
    int i = 0;
    t_stack *tmp = *b;
    while(*b)
    {
        big = searching_biggest(*b);
        while ((*b) != big)
        {
            if (tmp->top == 0)
                rra(b);
            else
                ra(b);
        }
        pa(b, a);
    }
}

void sort_numer_5(t_stack **a, t_stack **b)
{
    is_top(*a);
    t_stack *min = searching_minimum(*a);
    int i = 0;
    t_stack *tmp = *a;
    while(i < 2)
    {
        min = searching_minimum(*a);
        while ((*a) != min)
        {
            if (tmp->top == 0)
                rra(a);
            else
                ra(a);
        }
        pb(b, a);
        tmp = tmp->next;  
        i++;
    }
    sort_numer_3(a);
    while (*b != NULL)
        pa(b, a);
}

void sort_numer(t_stack **a, t_stack**b, long *tab)
{
    len(*a);
    int lent = (*a)->len;;
    int i = 0;
    int start = 0;
    int end;
    if (lent > 100)
        end = 20;
    t_stack *tmp;

    tmp =  *a;
    while((*a))
    {
        if(((tmp)->cont >= tab[start] && (tmp)->cont <= tab[end]))
        {
            pb(b, a);
            if (end != lent)
            {
                start++;
                end++;
            }
        }
        else if ((tmp)->cont < tab[start])
        {
            pb(b, a);
            rb(b);
            if (end != lent)
            {
                start++;
                end++;
            }
        }
        else if (end != lent)
            ra(a);
        tmp = *a;
    }
    while(*a)
        pb(b, a);
    part2(a, b);
}
void push_swap(t_stack **a, t_stack **b, long *tab)
{
    len(*a);
    // if ((*a)->len == 2)
    //     sort_numer_2(a);
    // if ((*a)->len == 3)
    //     sort_numer_3(a);
    // if ((*a)->len == 5)
    //     sort_numer_5(a, b);
    sort_numer(a, b, tab);
}
