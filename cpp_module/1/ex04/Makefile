SRCS = main.cpp 
OBJS = $(SRCS:.cpp=.o)

NAME = replace
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	rm *.replace

re: fclean all

.PHONY: all clean fclean re
