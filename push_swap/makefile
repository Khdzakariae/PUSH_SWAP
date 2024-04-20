
NAME = push_swap

# FLAGS = -Wall -Wextra -Werror


SRC = push_swap.c parcin/parisin1.c parcin/errores.c action/sa_sb_ss_.c action/pa_pb.c action/ra_rb_rr_.c

# SRC = test.c
LIBFT = resources/libft/libft.a
FT_PRINTF = resources/ft_printf/libftprintf.a

all: lib $(NAME)
	@echo  "push_swap done [ ✅ ]"  

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
