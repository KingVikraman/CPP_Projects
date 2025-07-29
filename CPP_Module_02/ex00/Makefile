NAME = fixed

src = main.cpp Fixed.cpp
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



# Fixed getfixed(Fixed f)
# {
# 	return f;
# }
# Fixed a;
# Fixed b = a;
# b = getFixed(a);


# Fixed& getFixed(Fixed& f) { return f; }

# int main() {
#     Fixed x;
#     Fixed y = getFixed(x);
#     y = getFixed(x);
# }

# Answer -> 

# | Code                     | What Happens             | Why                                   |
# | ------------------------ | ------------------------ | ------------------------------------- |
# | `Fixed x;`               | Default constructor      | `x` is created                        |
# | `Fixed y = getFixed(x);` | Copy constructor         | `y` is initialized from `x` (via ref) |
# | `y = getFixed(x);`       | Copy assignment operator | `y` is assigned value of `x`          |


# Fixed getFixed(Fixed f) { return f; }

# int main() {
#     Fixed a;
#     Fixed b = getFixed(a);
#     b = getFixed(b);
# }

# Answer ->

# | Line                     | Function Called          |
# | ------------------------ | ------------------------ |
# | `Fixed a;`               | Default constructor      |
# | `getFixed(a)` param      | Copy constructor         |
# | `return f` from getFixed | Copy constructor         |
# | `Fixed b = ...`          | Copy constructor         |
# | `getFixed(b)` param      | Copy constructor         |
# | `return f` from getFixed | Copy constructor         |
# | `b = getFixed(b);`       | Copy assignment operator |
