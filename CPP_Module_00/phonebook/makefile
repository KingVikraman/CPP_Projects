# 📦 Compiler setup
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# 🧱 Files
NAME = phonebook
SRCS = main.cpp contact.cpp phonebook.cpp
OBJS = $(SRCS:.cpp=.o)

# 🛠️ Build executable
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# 🧼 Clean .o files
clean:
	rm -f $(OBJS)

# 🧹 Clean all
fclean: clean
	rm -f $(NAME)

# 🔁 Rebuild
re: fclean all

.PHONY: all clean fclean re
