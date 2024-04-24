#include "../push_swap.h"
    // _Print(values, sise);
// void _Print(int *values, int sise)
// {
//     int i = 0;
//     while (i <= sise)
//     {
//         printf("the values table |%i|\n",values[i]);
//         i++;
//     }
// }


void cheack_sort(t_stack *head)
{
    t_stack *tmp = head;
    while(tmp)
    {
        if((tmp->cont) < (tmp->next->cont))
            print_error(5);
        tmp = tmp->next;
    }
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
// int cheack_repet(t_stack *data, int sise)
// {
//     int *values;
//     int i = 0;
//     int j;

//     if (sise == 1)
//         return(0);
//     values = (int *)malloc(sizeof(int) * sise);

//     while (i < sise)
//     {
//         values[i] = data->cont;
//         data = data->next;
//         i++;
//     }

//     i = 0;
//     while(i < sise)
//     {
//         j = i + 1;
//         while(j < sise)
//         {
//             if (values[i] == values[j])
//             {
//                 free(values);
//                 print_error(3);
//             }
//             j++;
//         }
//         i++;
//     }
//     free(values);
//     return(1);
// }

// int cheack_repate(char **av)
// {
//     int i = 0;
//     int j ;

//     while (/* condition */)
//     {
//         /* code */
//     }
    
// }

// int main (int ac , char **av)
// {
//     if (ac != 1)
//     {
//         char

//     }
// }
