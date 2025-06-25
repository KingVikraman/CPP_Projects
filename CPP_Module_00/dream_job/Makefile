# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Executable name (put in parent dir)
NAME = dream_job

# Source files
SRCS = account.cpp test.cpp
OBJS = $(SRCS:.cpp=.o)

# Default rule
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Remove object files
clean:
	rm -f $(OBJS)

# Remove binary and objects
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
