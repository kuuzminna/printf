NAME =	libftprintf.a

LIBFT = ./libft/libft.a

SRCS =  $(wildcard ./src/*.c)

OBJS = $(SRCS:.c=.o)

INCLUDES = -I./includes

CC = gcc
FLAGS = -Wall -Wextra -Werror

all	:	$(NAME)

$(NAME)	:	$(OBJ)
			$(MAKE) all -C ./libft
			cp $(LIBFT) $(NAME)
			$CC() $(FLAGS) $(INCLUDES) $(SRCS)
			ar rcs $(NAME) $?

clean	:
	rm -rf $(wildcard ./*.o)
	rm -rf $(wildcard ./*/*.o)

fclean :	clean 
	$(clean)
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re	:	fclean all

.PHONY :	all clean fclean re
