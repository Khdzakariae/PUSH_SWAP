#include "../includes/push_swap.h"

t_stack	*searching_biggest(t_stack *a)
{
	int		i;
	t_stack	*big;
	t_stack	*tmp;

	i = 0;
	big = a;
	tmp = a;
	while (tmp)
	{
		if (tmp->cont > big->cont)
		{
			big = tmp;
			tmp->index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (big);
}

t_stack	*searching_minimum(t_stack *a)
{
	t_stack	*min;
	t_stack	*tmp;

	min = a;
	tmp = a;
	while (tmp)
	{
		if (tmp->cont < min->cont)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}
