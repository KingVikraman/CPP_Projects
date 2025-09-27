# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raja <raja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/27 11:46:11 by raja              #+#    #+#              #
#    Updated: 2025/09/27 12:19:37 by raja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CC = c++


CFLAG = -Wall -Werror -Wextra -std=c++98 -g -00 -fsanitize=address
INC_DIR = includes
INC = I$(INC_DIR)
SRC_DIR = src

SRC =	$(addprefix $(SRC_DIR)/, \
		main.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		Brain.cpp\
		WrongAnimal.cpp \
		WrongCat.cpp )

OBJ_FOLDER = obj_files

OBJ_SRC = $(patsubst %.cpp, $(OBJ_FOLDER)/%.o, $(SRC))

