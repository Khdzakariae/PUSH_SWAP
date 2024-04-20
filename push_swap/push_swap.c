#include "push_swap.h"

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


int main (int ac , char **av)
{

    char **numbers;
    int i;
    int k = 1;
    long number;
    t_stack *b = NULL;
    i = 0;
    if (ac != 1)
    {
        t_stack *a = NULL;
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
                    add_node(&a, number);
                i++;
            }
            k++;
        }
        cheack_repet(a, ac -1);
        // printf("the list is |%ld|\n", a->next->cont);
        puts("==== stack a =====\n");
        print_list(a);
        rra(&a);
        puts("==== stack a =====\n");
        print_list(a);
        print_list(b);

    }
    else
        print_error(1);
}





