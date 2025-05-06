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
LDFLAGS     = -lreadline

SRC_DIR     = src
OBJ_DIR     = obj
INC_DIR     = inc

LIBFT_DIR   = libft
LIBFT       = $(LIBFT_DIR)/libft.a

INCFLAGS    = -I$(INC_DIR) -I$(LIBFT_DIR)/$(INC_DIR)


# Source files
SRCS        = main.c lexer.c token.c signal.c banner.c prompt.c

# Object files
OBJS        = $(SRCS:%.c=$(OBJ_DIR)/%.o)

# Colors
GREEN       = \033[32m
CYAN        = \033[36m
RESET       = \033[0m

# Default target
all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(INCFLAGS) -o $@ $^ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCFLAGS) -c $< -o $@

$(LIBFT):
	@make -C $(LIBFT_DIR) -s

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

run: all
	@./$(NAME)

leak: all
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean -s
	@clear

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean -s
	@clear

re: fclean all

.PHONY: all clean fclean re run leak
