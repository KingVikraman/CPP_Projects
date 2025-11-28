CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = *.cpp
HDRS = *.hpp
NAME = execute

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all