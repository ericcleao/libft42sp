NAME = libft.a

SRC = ft_*.c 

SRC_BONUS = 

OBJ := $(subst .c,.o,$(SRC))

OBJ_BONUS = $(subst .c,.o,$(SRC_BONUS))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: $(OBJ_BONUS)
	
$(OBJ_BONUS):
	gcc $(CFLAGS) -c $(SRC) $(SRC_BONUS)
	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus
