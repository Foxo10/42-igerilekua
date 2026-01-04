NAME = rush-02

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = //las funciones que tengamos que hacer

OBJECTS = $(SOURCES : .c = .o)

all: $(NAME)

$(NAME):$(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean:
	rm -rf $(NAME)

re:
	fclean all

.PHONY: all clean fclean re
