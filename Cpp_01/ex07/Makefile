NAME = replace

FLAGS = -Wall -Werror -Wextra

SRCS = Replacer.cpp main.cpp

HDRS = -I.
OBJS = $(SRCS:.cpp=.o)

GREEN = \x1b[32m

RED		= \x1b[31m

END		= \x1b[0m

all: $(NAME)
	@echo "$(RED)Replacer $(GREEN)created!$(END)"
$(NAME): $(OBJS)
			clang++ $(FLAGS) $(HDRS) -o $(NAME) $(OBJS)
.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
re:		fclean all

.PHONY: all clean fclean re