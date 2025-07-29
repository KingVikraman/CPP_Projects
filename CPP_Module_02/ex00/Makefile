NAME = fixed

src = main.cpp
obj = $(src:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(obj)
	$(CXX) $(CXXFLAGS) -o$(NAME) $(obj)

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME)

re: fclean all