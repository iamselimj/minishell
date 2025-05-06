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

GREEN       = \033[32m
CYAN        = \033[36m
RESET       = \033[0m

all: $(OBJ_DIR) $(NAME)
	@echo "$(CYAN)Building the entire project...$(RESET)"
	@$(CC) $(CFLAGS) $(INCFLAGS) $(LDFLAGS) $(SANITIZE) -o $(NAME) $(OBJS) $(LIBFT)
	@echo "$(GREEN)Build completed successfully!$(RESET)"

$(NAME): $(OBJS) $(LIBFT)
	@echo "$(CYAN)Compiling the Minishell executable...$(RESET)"
	@$(CC) $(CFLAGS) $(INCFLAGS) $(LDFLAGS) $(SANITIZE) -o $@ $^
	@echo "$(GREEN)Minishell executable built!$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)/$(dir $@)
	@echo "$(CYAN)Compiling source files...$(RESET)"
	@mkdir -p $(OBJ_DIR)/$(dir $@)
	@$(CC) $(CFLAGS) $(INCFLAGS) $(LDFLAGS) $(SANITIZE) -c $< -o $@
	@echo "$(GREEN)Files compiled.$(RESET)"

$(LIBFT):
	@echo "$(CYAN)Building the libft library...$(RESET)"
	@make -C $(LIBFT_DIR) -s
	@echo "$(GREEN)Libft library built!$(RESET)"

$(OBJ_DIR):
	@echo "$(CYAN)Creating object directory...$(RESET)"
	@mkdir -p $(OBJ_DIR)
	@echo "$(GREEN)Object directory created!$(RESET)"

run: all
	@echo "$(CYAN)Running Minishell...$(RESET)"
	@./$(NAME)
	@echo "$(GREEN)Minishell run completed!$(RESET)"

leak: all
	@echo "$(CYAN)Checking for memory leaks...$(RESET)"
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
	@echo "$(GREEN)Leak check completed!$(RESET)"

test:
	@echo "$(CYAN)Running tests...$(RESET)"
	@echo "$(GREEN)Tests completed successfully!$(RESET)"

trace: all
	@echo "$(CYAN)Tracing the program with ltrace...$(RESET)"
	@$(TRACER) ./$(NAME)
	@echo "$(GREEN)Trace completed!$(RESET)"

debug: all
	@echo "$(CYAN)Debugging with lldb...$(RESET)"
	@$(DEBUGGER) ./$(NAME)
	@echo "$(GREEN)Debugging completed!$(RESET)"

norm: 
	@echo "$(CYAN)Running Norminette...$(RESET)"
	@norminette .
	@echo "$(GREEN)Norminette check completed!$(RESET)"

clean:
	@echo "$(CYAN)Cleaning object files...$(RESET)"
	@rm -rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean -s
	@echo "$(GREEN)Object files cleaned!$(RESET)"

fclean: clean
	@echo "$(CYAN)Cleaning executable...$(RESET)"
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean -s
	@echo "$(GREEN)Executable cleaned!$(RESET)"

re: fclean all
	@echo "$(CYAN)Rebuilding everything...$(RESET)"
	@echo "$(GREEN)Everything rebuilt successfully!$(RESET)"

.PHONY: all clean fclean re run leak strace ltrace lurk lldb gdb asan norm
