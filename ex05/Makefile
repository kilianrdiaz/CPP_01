NAME    = harl2.0
CXX     = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -Iinc

SRC_DIR     = src
OBJ_DIR     = obj
INC_DIR     = inc

# Files
SRCS        = main.cpp Harl.cpp
SRC_PATHS   = $(addprefix $(SRC_DIR)/, $(SRCS))
OBJS        = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Rule to compile source files to object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp Makefile | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Ensure obj directory exists
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re