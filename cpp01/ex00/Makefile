GREEN		= 	\033[0;32m
RED			= 	\033[0;31m
RESET		= 	\033[0m

NAME		=	zombie

OBJ			=	$(patsubst src%, obj%, $(SRC:.cpp=.o))

SRC			=	source/main.cpp \
				source/Zombie.cpp \
				source/newZombie.cpp \
				source/randomChump.cpp 

CC			=	c++

HEADER		=	./includes

FLAGS		= -I${HEADER} -Wall -Wextra -Werror -std=c++98

all:		obj $(NAME)

$(NAME):	$(OBJ)
			@$(CC) $(FLAGS) -o $@ $^

obj:
			@mkdir -p obj

obj/%.o:	%.cpp
			@$(CC) $(FLAGS) -o $@ -c $<
			@echo "$@ $(GREEN)created$(RESET)"

valgrind:	all
	valgrind --leak-check=full --show-leak-kinds=all ./zombie

clean:
			@rm -rf $(OBJ) obj
			@echo "Object files $(RED)removed.$(RESET)"

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all valgrind clean fclean re