#include "includes/push_swap.h"

void print_list(t_stack *lst) 
{
    while (lst != NULL) {
        printf("the list is : %ld \n", lst->cont);
        lst = lst->next;
    }
    printf("\n");
}

void _printt(int *tab, int len)
{
    int i = 0;
    while(i < len)
    {
        printf("%i\n", tab[i]);
        i++;
    }  
}

int main (int ac , char **av)
{
    t_stack *a;
    t_stack *b;
    a = NULL;
    b = NULL;

    if (ac > 2)
    {
        _push(&a, &b, ac, av);
        parrss(a);
        long *tab = convert(a);
        sort(tab, a->len);
        push_swap(&a, &b, tab);
        // puts("==== stack a =====\n");
        // print_list(a);
        // puts("==== stack b =====\n");
        // print_list(b);
    }
    else
        print_error(1);
}