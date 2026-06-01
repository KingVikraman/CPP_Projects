# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/29 19:20:09 by rvikrama          #+#    #+#              #
#    Updated: 2026/06/01 17:50:35 by rvikrama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

NAME 		= RPN
SRCS		= RPN.cpp main.cpp 
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