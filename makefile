
NAME = push_swap
NAME_BONUS = push_swap_bonus

FLAGS = -Wall -Wextra -Werror


SRC =	push_swap.c resources/errores.c  resources/parisin1.c action/sa_sb_ss_.c \
		action/pa_pb.c action/ra_rb_rr_.c action/rra_rrb_rrr.c resources/searching.c \
		resources/sort.c resources/utils.c resources/sort_number.c resources/get_next_line/get_next_line.c \
		resources/get_next_line/get_next_line_utils.c

SRC_BONUS =	push_swap.c resources/errores.c  resources/parisin1.c action/sa_sb_ss_.c \
			action/pa_pb.c action/ra_rb_rr_.c action/rra_rrb_rrr.c resources/searching.c \
			resources/sort.c resources/utils.c resources/sort_number.c resources/get_next_line/get_next_line.c \
			resources/get_next_line/get_next_line_utils.c bonus/checker.c

LIBFT = resources/libft/libft.a
FT_PRINTF = resources/ft_printf/libftprintf.a

all: lib $(NAME)
	@echo  "push_swap done [ ✅ ]"  

bonus: lib $(NAME_BONUS)
	@cc $^ $(FLAGS)  $(LIBFT) $(FT_PRINTF) -o push_swap

$(NAME_BONUS) : $(SRC_BONUS)
	@cc $^ $(FLAGS)  $(LIBFT) $(FT_PRINTF) -o push_swap_bonus

$(NAME) : $(SRC)
	@cc $^ $(FLAGS)  $(LIBFT) $(FT_PRINTF) -o push_swap

lib :
	@make -C resources/ft_printf --no-print-directory
	@make -C resources/libft --no-print-directory

clean:
	@make clean -C resources/ft_printf --no-print-directory
	@make clean -C resources/libft --no-print-directory
	@echo  "clean [ ✅ ]" 

fclean : clean
	@make clean -C resources/ft_printf --no-print-directory
	@make clean -C resources/libft --no-print-directory
	@rm -f  push_swap
	@echo  "fclean [ ✅ ]" 

re: fclean all
