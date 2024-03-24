#include "push_swap.h"


int main (int ac , char **av)
{
    int *values;
    int i;

    i = 1;
    if (ac != 1)
    {
        values = (int *)malloc(sizeof(int) * ac - 1);
        if (!values)
            exit (1);
        cheack(values, ac - 1, av);
    }
    else 
        print_error(1);
}