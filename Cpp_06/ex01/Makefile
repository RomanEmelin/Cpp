NAME = serializer

FLAGS = -Wall -Werror -Wextra

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

GREEN = \x1b[32m

RED		= \x1b[31m

END		= \x1b[0m

all: $(NAME)
	@echo "$(RED)serializer $(GREEN)created!$(END)"
$(NAME): $(OBJS)
			clang++ $(FLAGS) -o $(NAME) $(OBJS)
.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
re:		fclean all

.PHONY: all clean fclean re