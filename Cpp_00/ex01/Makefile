NAME = phonebook

FLAGS = -Wall -Werror -Wextra

SRCS = Contact.cpp PhoneBook.cpp main.cpp

HDRS = Contact.hpp PhoneBook.hpp

OBJS = $(SRCS:.cpp=.o)

GREEN = \x1b[32m

RED		= \x1b[31m

END		= \x1b[0m

all: $(NAME)
	 @echo "$(GREEN)Program created! Enter $(RED) ./phonebook to start!$(END)"

$(NAME): $(OBJS)
			clang++ $(FLAGS) -I$(HDRS) -o $(NAME)

.cpp.o:
			clang++ $(FLAGS) -c $< -o $@

clean:
		rm -f *.o


fclean: clean
		rm -f $(NAME)

re:		fclean all



.PHONY: all clean fclean re