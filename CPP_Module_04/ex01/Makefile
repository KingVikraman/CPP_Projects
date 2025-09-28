# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raja <raja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/27 11:46:11 by raja              #+#    #+#              #
#    Updated: 2025/09/28 16:33:48 by raja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CC = c++

CFLAG = -Wall -Werror -Wextra -std=c++98 -g -O0 -fsanitize=address
# -g3 -O3 -O0 -fsanitize=address -fsanitize-recover=leak
# valgrind --leak-check=full --show-leak-kinds=all
# -g = gives error messages for debugging, needed by gdb / valgrind / helgrind

INC_DIR = includes
INC = -I$(INC_DIR)

SRC =	src/main.cpp \
		src/Animal.cpp \
		src/Dog.cpp \
		src/Cat.cpp \
		src/WrongAnimal.cpp \
		src/WrongCat.cpp \
		src/Brain.cpp

OBJ_FOLDER = obj_files


OBJ_SRC = $(patsubst %.cpp, $(OBJ_FOLDER)/%.o, $(SRC))

# color
GREEN = \033[0;32m
CYAN = \033[0;36m
RESET = \033[0m

all: $(NAME)

$(NAME) : $(OBJ_SRC)
	$(CC) $(CFLAG) $(OBJ_SRC) -o $(NAME)
		@echo "${CYAN}=========================================== \n${RESET}"
		@echo "${CYAN}██████╗  █████╗      ██╗ █████╗   ██╗   ██╗${RESET}"
		@echo "${CYAN}██╔══██╗██╔══██╗     ██║██╔══██╗  ██║   ██║${RESET}"
		@echo "${CYAN}██████╔╝███████║     ██║███████║  ██║   ██║${RESET}"
		@echo "${CYAN}██╔══██╗██╔══██║██   ██║██╔══██║  ╚██╗ ██╔╝${RESET}"
		@echo "${CYAN}██║  ██║██║  ██║╚█████╔╝██║  ██║██╗╚████╔╝ ${RESET}"
		@echo "${CYAN}╚═╝  ╚═╝╚═╝  ╚═╝ ╚════╝ ╚═╝  ╚═╝╚═╝ ╚═══╝  ${RESET}"
		@echo "${CYAN}=========================================== \n${RESET}"
		@echo "${GREEN}----------COMPILED DONE----------${RESET}"


$(OBJ_FOLDER)/%.o : %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAG) $(INC) -c $< -o $@

clean:
	rm -rf $(OBJ_FOLDER)
	@echo "${GREEN}----------CLEANED----------\n${RESET}"

fclean : clean
	rm -f $(NAME)
	@echo "${GREEN}----------FULLY REMOVE----------\n${RESET}"

re : fclean all

.PHONY : all clean fclean re

