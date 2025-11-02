# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 16:38:35 by rvikrama          #+#    #+#              #
#    Updated: 2025/10/27 15:44:14 by rvikrama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98
# -g -O0 -fsanitize=address

INC_DIR = includes
INC = -I$(INC_DIR)

SRC =	src/Bureaucrat.cpp \
		src/main.cpp

OBJ_FOLDER = obj_files

OBJ_SRC = $(patsubst %.cpp, $(OBJ_FOLDER)/%.o, $(SRC))

#color
GREEN = \033[0;32m
CYAN = \033[0;36m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ_SRC)
	$(CXX) $(CXXFLAGS) $(OBJ_SRC) -o $(NAME)
		@echo "${CYAN}============================================================\n${RESET}"
		@echo "${CYAN}    _/_/_/      _/_/          _/    _/_/      _/      _/   ${RESET}"
		@echo "${CYAN}   _/    _/  _/    _/        _/  _/    _/    _/      _/    ${RESET}"
		@echo "${CYAN}  _/_/_/    _/_/_/_/        _/  _/_/_/_/    _/      _/     ${RESET}"
		@echo "${CYAN} _/    _/  _/    _/  _/    _/  _/    _/      _/  _/        ${RESET}"
		@echo "${CYAN}_/    _/  _/    _/    _/_/    _/    _/  _/    _/           ${RESET}"
		@echo "${CYAN}============================================================\n${RESET}"
		@echo "${GREEN}-------------------COMPILED CODE-------------------${RESET}"

$(OBJ_FOLDER)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

clean:
	rm -rf $(OBJ_FOLDER)
	@echo "${GREEN}-----------------CLEANED-----------------\n${RESET}"

fclean: clean
	rm -f $(NAME)
	@echo "${GREEN}------------------FULLY CLEANED--------------\n${RESET}"

re : fclean all

.PHONY : all clean fclean re