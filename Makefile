CFLAGS = -Wall -Wextra -Iinclude -lcsfml-graphics -lcsfml-window -lcsfml-audio

SRC	= 	src/main.c \
		src/create_render_window.c \

OBJ = $(SRC:.c=.o)

NAME = game

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@echo -e "\033[32m[OK]\033[0m": $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@echo -e "\033[31m[RM]\033[0m": $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo -e "\033[31m[RM]\033[0m": $(NAME)

re: fclean all

.PHONY: all clean fclean re