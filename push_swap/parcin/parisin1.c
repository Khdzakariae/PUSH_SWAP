#include "../push_swap.h"

int cheack(int *values, int sise, char **av)
{
    int i;
    long temp;
    i = 0;
    while ( i < sise)
    {
        temp = ft_atoi(av[i + 1]);
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
