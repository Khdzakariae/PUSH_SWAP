#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst != NULL)
	{
		lastnode = ft_lstlast(*lst);
		lastnode->next = new;
		return ;
	}
	*lst = new;
}
void print_list(t_list *lst) {
    puts("hey");
    while (lst != NULL) {
        printf("%ld ", lst->content);
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
            if (!numbers)
            {
                puts("allo");
                exit(1);
            }
            while (numbers[i] != NULL)
            {
                    number = ft_atoi(numbers[i]);
                    if ((number > INT_MAX) || (number < INT_MIN))
                    {
                        puts("hey1");
                        exit(1);
                    }
                    t_list *new_node = ft_lstnew(number);
                    ft_lstadd_back(&head, new_node);
                i++;
            }
            k++;
        }
        print_list(head);
    }
            // printf("the nember is |%ld|\n",number);
            // puts("\n=============================");
            // t_list *new_node = ft_lstnew(&number);
            // new_node->content = number;
            // printf("-|%ld|\n",(long)head->content);
            // ft_lstadd_back(&head,tmp);
        
    //             // create node assign to it number and link it with previous node.
    //             // tmp = ft_lst_addbacl(old);
    //             // tmp->Data = number;
                
    //         }  
    // }
    // else 
    //     print_error(1);
}