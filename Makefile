NAME =	libftprintf.a

LIST =	

OBJ = $(patsubst %.c,%.o,$(LIST))

OPTFLAGS = -O2 
FLAGS = -Wall -Wextra -Werror

all	:	$(NAME)

$(NAME)	:	$(OBJ)
			ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ)

fclean :	clean 
	@rm -f $(NAME)

re	:	fclean all

.PHONY :	all clean fclean re
