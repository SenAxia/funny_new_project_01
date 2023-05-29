# Makefile
# Nothing to say lol...

SRC	=	$(wildcard sources/*.cpp)

OBJ	=	$(SRC:.cpp=.o)

NAME	=	sander

all:	$(NAME)

$(NAME):	$(OBJ)
	g++ -o $(NAME) $(OBJ) -std=c++20 -Wall -Wextra -Werror -g3 -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -f $(OBJ)
	rm -f $(NAME)

fclean: clean

re:	fclean all