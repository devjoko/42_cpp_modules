NAME	= zombiehorde
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

O		= obj/
S		= src/

OBJS	= $(patsubst %.c, $O%.o, $(SRCS))
SRCS	=	$Smain.cpp \
			$SZombie.cpp \
			$SzombieHorde.cpp \

.PHONY: all clean fclean re

all: $(NAME)

# Linking...
$(NAME):	$(OBJS)
			@echo "[¬º-°]¬ (¬ ﾟ-°)¬   ヽ(ﾟДﾟ)ﾉ \033[1;95m"$(NAME) linking...
			@$(CC) $(OBJS) -o $(NAME)
			@echo "[¬º-°]¬ (¬ ﾟ-°)¬   ヽ(ﾟДﾟ)ﾉ \033[1;32m$(NAME) \033[1;0m\033[32m created.\033[0m"

# Compiling...
$O%.o:	%.c
		@[ -d $(O) ] || mkdir -p $(O)
		@echo "[¬º-°]¬ (¬ ﾟ-°)¬   ヽ(ﾟДﾟ)ﾉ \[\033[0;95m\]"$(NAME)\033[1;0m\033[32m compiling...\033[0m"
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@rm -rf $(O)
		@echo "[¬º-°]¬ (¬ ﾟ-°)¬   ヽ(ﾟДﾟ)ﾉ \033[31mObjects files in $(NAME) \033[1;0m\033[31mremoved.\033[0m"

fclean:	clean
		@rm -f $(NAME)
		@echo "[¬º-°]¬ (¬ ﾟ-°)¬   ヽ(ﾟДﾟ)ﾉ \033[1;31m$(NAME)\033[1;0m\033[31m Removed.\033[0m"

re: fclean all
