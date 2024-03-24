#include "../push_swap.h"


int cheack_alphabet(char *av)
{
    int i;
    i = 0;

    while(av[i])
    {
        if ((av[i] == '+' && av[i] == '-'))
        {
            if (av[i + 1] > '9' && av[i + 1] < '0')
            {
                print_error(3);
                return(0);
            }
        }
        printf("%c ",av[i]);
        puts("===========\n");
        if (av[i] == 4)
        {
            print_error(3);
            return(0);
        }
        i++;
    }
        puts("=========================================\n");

    return(1);
}

int cheack(int *values, int sise, char **av)
{
    int i;

    i = 0;
    while ( i < sise)
    {
        if (cheack_alphabet(av[i + 1]) == 0)
            return(0);

        values[i] = ft_atoi(av[i + 1]);
        if (!ft_atoi(av[i + 1]))
        {
            print_error(2);
            return(0);
        }
        else if ((values[i]) >= INT_MAX && values[i] <= INT_MIN)
        {
            print_error(2);
        }
        printf("|%d| ",values[i]);
        i++;
    }
    return(1);
}