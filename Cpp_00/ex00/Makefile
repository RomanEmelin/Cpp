NAME = megaphone

FLAGS = -Wall -Werror -Wextra

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

GREEN = \x1b[32m

RED		= \x1b[31m

END		= \x1b[0m

all: $(NAME)
	@echo "$(GREEN)Program created, use $(RED)make test $(GREEN) to check it.$(END)"
$(NAME): $(OBJS)
			clang++ $(FLAGS) -o $(NAME) $(OBJS)
.cpp.o:
			clang++ $(FLAGS) -c $< -o $@
clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
re:		fclean all

test:
		@echo "$(GREEN)Without arguments.$(END)"
		./megaphone
		@echo "$(GREEN)First argument from subject: $(RED)\"shhhhh... I think the students are asleep...\".$(END)"
		./megaphone "shhhhh... I think the students are asleep..."
		@echo "$(GREEN)Second argument from subject:  $(RED)Damnit \" ! \" \"Sorry students, I thought this thing was off.\"$(END)"
		./megaphone  Damnit " ! " "Sorry students, I thought this thing was off."

.PHONY: all clean fclean re test

