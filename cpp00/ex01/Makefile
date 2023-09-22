GREEN		= 	\033[0;32m
RED			= 	\033[0;31m
RESET		= 	\033[0m

NAME		=	phonebook

OBJ			=	$(patsubst src%, obj%, $(SRC:.cpp=.o))

SRC			=	phonebook.cpp

CC			=	g++
FLAGS		=	-Wall -Wextra -Werror -std=c++98

all:		$(NAME) 

$(NAME):	$(OBJ)
			@$(CC) -o $@ $^ $(FLAGS)

obj/%.o:
			@$(CC) $(FLAGS) -o $@ -c $<
			@echo "$@ $(GREEN)created$(RESET)"

valgrind:	all
			valgrind --leak-check=full --show-leak-kinds=all ./phonebook

clean:
			@rm -rf $(OBJ) obj
			@echo "Object files $(RED)removed.$(RESET)"

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re