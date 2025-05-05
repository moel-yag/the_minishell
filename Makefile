NAME	= minishell

CFLAGS	= -Wall -Wextra -Werror
LIBFT_DIR = libft
LIBFT	= $(LIBFT_DIR)/libft.a
INCLUDES = -I includes -I $(LIBFT_DIR)/includes
LIBS	= -L $(LIBFT_DIR) -lft -lreadline

SRCS	= srcs/main.c  srcs/execution/execution.c  srcs/execution/buitins.c  \
	  srcs/execution/signals.c  \
	  srcs/utils/utils.c

OBJS	= $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	@cc $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)
	@echo "minishell compiled!"

$(LIBFT):
	@make -C $(LIBFT_DIR)

%.o: %.c
	@cc $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean
	@echo "Object files removed!"

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@echo "Executable removed!"

re: fclean all

.PHONY: all clean fclean re
