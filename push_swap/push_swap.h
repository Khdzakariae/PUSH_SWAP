#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

// =========== print colors ===============//

#define RED          "\x1b[31m"

// ========================================//

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

// typedef struct s_list
// {
// 	long		    content;
// 	struct s_list	*next;
// }	t_list;




    
void print_error(int i);
int cheack(int *values, int sise, char **av);


#endif