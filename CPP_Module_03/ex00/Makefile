NAME = ClapTrap

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

src			= main.cpp ClapTrap.cpp
objs		= $(src:.cpp=.o)


all: $(NAME)


$(NAME): $(objs)
	$(CXX) $(CXXDFLAGS) $(objs) -o $(NAME)

clean: 
	rm -f $(objs)

fclean: clean
	rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re
