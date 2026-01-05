# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raja <raja@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/11 18:20:24 by rvikrama          #+#    #+#              #
#    Updated: 2026/01/05 15:40:11 by raja             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

INC_DIR = includes
INC = -I$(INC_DIR)

SRC =	src/main.cpp

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
	@printf "$(CYAN)%s$(RESET)\n" "                                                      "
	@printf "$(CYAN)%s$(RESET)\n" "  ▄▄▄▄▄▄        ▄▄     ▄▄▄▄▄▄   ▄▄         ▄▄▄       "
	@printf "$(CYAN)%s$(RESET)\n" " █▀██▀▀▀█▄    ▄█▀▀█▄  █▀ ██   ▄█▀▀█▄      █▀██  ██▀▀ "
	@printf "$(CYAN)%s$(RESET)\n" "   ██▄▄▄█▀    ██  ██     ██   ██  ██        ██  ██   "
	@printf "$(CYAN)%s$(RESET)\n" "   ██▀▀█▄     ██▀▀██     ██   ██▀▀██        ██  ██   "
	@printf "$(CYAN)%s$(RESET)\n" " ▄ ██  ██   ▄ ██  ██     ██ ▄ ██  ██        ██▄ ██   "
	@printf "$(CYAN)%s$(RESET)\n" " ▀██▀  ▀██▀ ▀██▀  ▀█▄█   ██ ▀██▀  ▀█▄█ ██    ▀███▀   "
	@printf "$(CYAN)%s$(RESET)\n" "                     ▄   ██                          "
	@printf "$(CYAN)%s$(RESET)\n" "                     ▀████▀                          "
	@printf "\n"
	@printf "%b\n" "${GREEN}------------------- COMPILED CODE -------------------${RESET}"
	@printf "\n"
	@printf "          \033[5;1;33m==============================\033[0m\n"
	@printf "             RUNNING ・ 2025 ・ BY RAJA\n"
	@printf "          \033[5;1;33m==============================\033[0m\n\n"



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
	@sleep 0.2
	@echo "\033[5;1;31m                  WARNING!!   \033[0m"
	@echo
	@echo "\033[3;31m         THIS ACTION IS IRREVERSABLE... \033[0m"
	@sleep 2.0
	@echo "\033[1;36m╔════════════════════════════════════════════╗\033[0m"
	@echo "\033[1;36m║          CLEANUP SEQUENCE COMPLETE         ║\033[0m"
	@echo "\033[1;36m╚════════════════════════════════════════════╝\033[0m"
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re