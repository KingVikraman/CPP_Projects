CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

NAME 		= Harl_2.0
SRCS		= 
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
