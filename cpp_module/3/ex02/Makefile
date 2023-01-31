SRCS = main.cpp FragTrap.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = fragtrap
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

leaks:
	leaks -atExit -- ./fragtrap

re: fclean all

.PHONY: all clean fclean re leaks