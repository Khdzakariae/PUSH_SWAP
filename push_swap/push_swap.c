#include "includes/push_swap.h"

void add_node(t_stack **head, int data)
{
    t_stack *tmp = malloc(sizeof(t_stack));
    tmp->cont = data;
    tmp->next = NULL;
    if (*head == NULL)
        *head = tmp;
    else
    {
        t_stack *temp1  = *head;
        while(temp1->next != NULL)
            temp1  = temp1->next;
        temp1->next = tmp;
    }
}

void print_list(t_stack *lst) {
    while (lst != NULL) {
        printf("the list is : %ld \n", lst->cont);
        lst = lst->next;
    }
    printf("\n");
}

void _push(t_stack **a, t_stack **b, int ac, char **av)
{
    char **numbers;
    int i;
    int k = 1;
    long number;

    i = 0;
    while (k <= ac - 1)
    {
        numbers = ft_split(av[k], ' ');
        if (!*numbers)
            print_error(4);
        i = 0;
        while (numbers[i] != NULL)
        {
            number = ft_atoi(numbers[i]);
            if ((number > INT_MAX) || (number < INT_MIN))
                print_error(2);
            add_node(&(*a), number);
            i++;
        }
        k++;
    }
}

void parrss(t_stack *a)
{
    cheack_repet(a);
    cheack_sort(a);
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
        searching_minimum(a);
        puts("==== stack a =====\n");
        print_list(a);
        if (ac == 3)
            sort_numer_2(&a);
        if (ac == 4)
            sort_numer_3(&a);
        puts("==== stack a =====\n");
        print_list(a);
    }
    else
        print_error(1);
}