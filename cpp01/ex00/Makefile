NAME	= zombie
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

O		= obj/
S		= src/

OBJS	= $(patsubst $S%.cpp, $O%.o, $(SRCS))
SRCS	=	$Smain.cpp \
			$SnewZombie.cpp \
			$SrandomChump.cpp \
			$SZombie.cpp \

.PHONY: all clean fclean re

all: $(NAME)

# Linking...
$(NAME):	$(OBJS)
			@echo "\033[1;33m[¬º-°]¬ $(NAME)\033[0m \033[0;33mlinking.\033[0m"
			@$(CC) $(OBJS) -o $(NAME)
			@echo "\033[1;35m[¬º-°]¬ $(NAME)\033[0m \033[0;35mcreated.\033[0m"

# Compiling...
$O%.o:		$S%.cpp
			@[ -d $(O) ] || mkdir -p $(O)
			@echo "\033[1;36m[¬º-°]¬ $(NAME)\033[0m \033[0;36mcompiling.\033[0m"
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@rm -rf $(O)
			@echo "\033[1;31m[¬º-°]¬ object files\033[0m \033[0;31mremoved.\033[0m"

fclean:		clean
			@rm -f $(NAME)
			@echo "\033[1;31m[¬º-°]¬ $(NAME)\033[0m \033[0;31mremoved.\033[0m"

re: fclean all
