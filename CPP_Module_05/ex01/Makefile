# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/02 21:59:08 by rvikrama          #+#    #+#              #
#    Updated: 2025/11/14 15:07:55 by rvikrama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98
# -g -O0 -fsanitize=address

INC_DIR = includes
INC = -I$(INC_DIR)

SRC =	src/Bureaucrat.cpp \
		src/Form.cpp \
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
	@clear
	@echo "${CYAN}============================================================\n${RESET}"
	@echo "${CYAN}    _/_/_/      _/_/          _/    _/_/      _/      _/   ${RESET}"
	@echo "${CYAN}   _/    _/  _/    _/        _/  _/    _/    _/      _/    ${RESET}"
	@echo "${CYAN}  _/_/_/    _/_/_/_/        _/  _/_/_/_/    _/      _/     ${RESET}"
	@echo "${CYAN} _/    _/  _/    _/  _/    _/  _/    _/      _/  _/        ${RESET}"
	@echo "${CYAN}_/    _/  _/    _/    _/_/    _/    _/  _/    _/           ${RESET}"
	@echo "${CYAN}============================================================\n${RESET}"
	@echo "${GREEN}-------------------COMPILED CODE-------------------${RESET}"
	@echo
	@echo "          \033[5;1;33m==============================\033[0m"
	@echo "             RUNNIG ・ 2025 ・ BY RAJA "
	@echo "          \033[5;1;33m==============================	\033[0m"
	@echo

$(OBJ_FOLDER)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

clean:
	rm -rf $(OBJ_FOLDER)
fclean: clean
	@echo
	@echo "\033[3;33m╔════════════════════════════════════════════╗\033[0m"
	@echo "\033[3;33m║  ⚠️ SYSTEM PURGE INITIATED — FCLEAN MODE ⚠️  ║\033[0m"
	@echo "\033[3;33m╚════════════════════════════════════════════╝\033[0m"
	@echo
	@echo "\033[5;1;31m           WARNING!!   \033[0m"
	@echo
	@echo "\033[3;31m    THIS ACTION IS IRREVERSABLE... \033[0m"
	@echo "\033[1;36m╔════════════════════════════════════════════╗\033[0m"
	@echo "\033[1;36m║          CLEANUP SEQUENCE COMPLETE         ║\033[0m"
	@echo "\033[1;36m╚════════════════════════════════════════════╝\033[0m"
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re