/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:56:48 by zel-khad          #+#    #+#             */
/*   Updated: 2024/05/01 13:43:24 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	add_node(t_stack **head, int data)
{
	t_stack	*tmp;
	t_stack	*temp1;

	tmp = malloc(sizeof(t_stack));
	tmp->cont = data;
	tmp->next = NULL;
	if (*head == NULL)
		*head = tmp;
	else
	{
		temp1 = *head;
		while (temp1->next != NULL)
			temp1 = temp1->next;
		temp1->next = tmp;
	}
}

void	_push(t_stack **a, t_stack **b, int ac, char **av)
{
	char	**numbers;
	int		i;
	int		k;
	long	number;

	k = 1;
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
			free(numbers[i]);
			if ((number > INT_MAX) || (number < INT_MIN))
				print_error(2);
			add_node(&(*a), number);
			i++;
		}
		free(numbers);
		k++;
	}
	numbers = NULL;
}

long	*convert(t_stack *a)
{
	int		i;
	t_stack	*tmp;
	long	*tab;

	i = 0;
	tmp = a;
	len(a);
	tab = malloc((a->len) * sizeof(long));
	while (tmp)
	{
		tab[i] = tmp->cont;
		tmp = tmp->next;
		i++;
	}
	return (tab);
}

int	sort(long *tab, int len)
{
	int	j;
	int	i;

	while (len != 0)
	{
		i = 0;
		j = i + 1;
		while (j < len)
		{
			if (tab[i] > tab[j])
				ft_swap(&(tab[i]), &(tab[j]));
			i++;
			j++;
		}
		len--;
	}
	return (*tab);
}
