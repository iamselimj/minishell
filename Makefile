# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 15:22:59 by sjacquet          #+#    #+#              #
#    Updated: 2025/05/06 17:45:00 by kerberos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = minishell

CC          = cc
CFLAGS      = -Wall -Wextra -Werror -g 
SANITIZE    = -fsanitize=address
LDFLAGS		= -Lreadline -lreadline -Llibft -lft

TRACER = ltrace
DEBUGGER = lldb

SRC_DIR     = src
SRCS        = main.c lexer.c token.c signal.c banner.c prompt.c

OBJ_DIR     = obj
OBJS        = $(SRCS:%.c=$(OBJ_DIR)/%.o)

LIBFT_DIR   = libft
LIBFT       = $(LIBFT_DIR)/libft.a

INC_DIR     = inc
INCFLAGS    = -I$(INC_DIR) -I$(LIBFT_DIR)/inc

# Colors
GREEN       = \033[32m
CYAN        = \033[36m
RESET       = \033[0m

# Default target
all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(INCFLAGS) $(LDFLAGS) $(SANITIZE) -o $@ $^

# Rule to build object files, ensuring all subdirectories in $(OBJ_DIR) exist
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)/$(dir $@)
	mkdir -p $(OBJ_DIR)/$(dir $@)
	$(CC) $(CFLAGS)  $(INCFLAGS) $(LDFLAGS)  $(SANITIZE) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR) -s

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

run: all
	./$(NAME)

leak: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

clean:
	rm -rf $(OBJ_DIR)
	make -C $(LIBFT_DIR) clean -s

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean -s

re: fclean all

# New rules:

trace: all
	$(TRACER) ./$(NAME)

debug: all
	$(DEBUGGER) ./$(NAME)

norm: 
	norminette .

.PHONY: all clean fclean re run leak strace ltrace lurk lldb gdb asan norm
