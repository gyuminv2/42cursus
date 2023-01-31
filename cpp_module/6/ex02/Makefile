SRCS = main.cpp Base.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = realtype
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

leaks:
	leaks -atExit -- ./realtype

.PHONY: all clean fclean re leaks