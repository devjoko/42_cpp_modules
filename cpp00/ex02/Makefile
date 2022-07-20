NAME	= account
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

O		= obj/

OBJS	= $(patsubst %.c, $O%.o, $(SRCS))
SRCS	=	Account.cpp \
			tests.cpp \

.PHONY: all clean fclean re

all: $(NAME)

# Linking...
$(NAME):	$(OBJS)
			@echo "\033[1;32m$(NAME) ʕ·͡ᴥ·ʔ\033[1;0m\033[32m linking...\033[0m"
			@$(CC) $(OBJS) -o $(NAME)
			@echo "\033[1;32m$(NAME) ʕ·͡ᴥ·ʔ\033[1;0m\033[32m created.\033[0m"

# Compiling...
$O%.o:		%.c
			@[ -d $(O) ] || mkdir -p $(O)
			@echo "\033[1;32m$(NAME) ʕ·͡ᴥ·ʔ\033[1;0m\033[32m compiling...\033[0m"
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@rm -rf $(O)
			@echo "\033[31mObjects files in $(NAME) \033[1;0m\033[31mremoved.\033[0m"

fclean:		clean
			@rm -f $(NAME)
			@echo "\033[1;31m$(NAME) ʕ·͡ᴥ·ʔ\033[1;0m\033[31m Removed.\033[0m"

re: fclean all