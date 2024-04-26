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

// void part2(t_stack **a, t_stack **b)
// {
//     is_top(*b);
//     t_stack *big = searching_biggest(*b);
//     int i = 0;
//     t_stack *tmp = *b;
//     while(*b)
//     {
//         is_top(*b);
//         tmp = *b;
//         if((*b) == big)
//             pa(b, a);
        
//         else {
//             tmp = (*b);
//             // count rrb or rb
//         }
        
        
//         else if (tmp->top == 0 && (*b) != big)
//             rrb(b);


//          else if (tmp->top == 1 && (*b) != big)
//                 rb(b);


    
//              puts("==== stack a =====\n");
//              print_list(*a);
//              puts("==== stack b =====\n");
//              print_list(*b);

//     }
// }
void sort_numer(t_stack **a, t_stack**b, long *tab)
{
    len(*a);
    int lent = (*a)->len - 1;
    int i = 0;
    int start = 0;
    int end = 2;
    t_stack *tmp;
    if (lent > 5 && lent <= 20)
        end = 2;
    else if (lent > 20 && lent <= 100)
        end = 30;

    tmp =  *a;
    while((tmp))
    {

        if(((tmp)->cont >= tab[start] && (tmp)->cont <= tab[end]))
        {
            pb(b, a);
            if (end < lent)
            {
                start++;
                end++;
            }
        }
        else if ((tmp)->cont < tab[start])
        {
            pb(b, a);
            rb(b);
            if (end < lent)
            {
                start++;
                end++;
            }
        }
        else if (tmp == NULL)
            pb(b, a); 
        else 
            ra(a);
        tmp = *a;
    }
    // part2(a, b);
}
// void sort_numer(t_stack **a, t_stack**b, long *tab)
// {
//     len(*a);
//     int lent = (*a)->len;;
//     int i = 0;
//     int start = 0;
//     int end = 20;
//     t_stack *tmp;

//     tmp =  *a;
//     while(tmp)
//     {
//         if(((tmp)->cont >= tab[start] && (tmp)->cont <= tab[end]))
//         {
//             pb(b, a);
//             if (end != lent)
//             {
//                 start++;
//                 end++;
//             }
//         }
//         else if ((tmp)->cont < tab[start])
//         {
//             pb(b, a);
//             rb(b);
//             if (end != lent)
//             {
//                 start++;
//                 end++;
//             }
//         }
//         else if ((*a) != NULL)
//             pb(b, a);
//         else
//             rra(a);
//         tmp = *a;
//     }
//             //             puts("==== stack a =====\n");
//             // print_list(*a);
//             // puts("==== stack b =====\n");
//             // print_list(*b);
//     // part2(a, b);

// }


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
