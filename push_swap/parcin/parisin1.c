#include "../push_swap.h"

int cheack(int *values, int sise, char **av)
{
    int i;
    long temp;
    i = 0;
    while ( i < sise)
    {
        temp = ft_atoi(av[i]);
        if ((temp) > INT_MAX || temp <= INT_MIN)
        {
            print_error(2);
            free(values);
            exit(1);
        }
        values[i] = temp;

        i++;
    }
    return(1);
}

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
