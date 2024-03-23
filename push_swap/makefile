FLAGS = -Wall -Wextra -Werror

NAME = push_swap

SRC_1_2	 = push_swap.c

LIBFT = libft/libft.a

OBJ = $(SRC_1_2:.c=.o)

all: $(LIBFT) $(NAME)
	@echo "PUSH_SWAP DONE [✅]"


$(LIBFT) :
	@make -C libft


%.o : %.c
	@cc $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $@ $^

clean:
	@echo "CLEAN DONE [✅]"
	@rm -f $(OBJ) 
	@make clean -C libft


fclean: clean
	@echo "FCLEAN DONE [✅]"
	@make fclean -C libft
	@rm -f $(NAME)

re: fclean all
	@echo "REBUILD DONE [✅]"
