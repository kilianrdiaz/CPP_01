# Variables
NAME     := main
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS     := main.cpp
OBJS     := $(SRCS:.cpp=.o)

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re