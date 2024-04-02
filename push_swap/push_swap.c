#include "push_swap.h"

void print_list(t_list *lst) {
    while (lst != NULL) {
        printf("the list is : %ld \n", lst->content);
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


    i = 0;
    if (ac != 1)
    {

        t_list *head = NULL;
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
                    t_list *new_node = ft_lstnew(number);
                    ft_lstadd_back(&head, new_node);
                i++;
            }
            k++;
        }
        cheack_repet(head, ac -1);
        print_list(head);
    }
    else
        print_error(1);
}





