CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

# NAME 		= megaphone
# SRCS		= megaphone.cpp
# OBJS		= $(SRCS:.cpp=.o)
EX_DIRS		= megaphone phonebook dream_job

all: $(EX_DIRS)


# $(NAME): $(OBJS)
# 		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
$(EX_DIRS):
	$(MAKE) -C $@

 
clean: 
	@for dir in $(EX_DIRS); do \
		$(MAKE) -C $$dir clean; \
	done

fclean:
	@for dir in $(EX_DIRS); do \
		$(MAKE) -C $$dir fclean; \
	done

re :fclean all

.PHONY: all clean fclean re $(EX_DIRS)

