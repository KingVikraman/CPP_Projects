CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

NAME 		= Sed_is_for_losers
SRCS		= main.cpp replace.cpp
OBJS		= $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
