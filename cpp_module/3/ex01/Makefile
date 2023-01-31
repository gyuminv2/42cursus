SRCS = main.cpp ScavTrap.cpp ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = scavtrap
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

leaks:
	leaks -atExit -- ./scavtrap

re: fclean all

.PHONY: all clean fclean re leaks