# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 21:21:23 by kerberos          #+#    #+#              #
#    Updated: 2025/05/06 06:31:13 by kerberos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SANITIZE = -fsanitize=address

SRC_DIR = src
# Explicitly list all source files
SRC_FILES = \
	bool/ft_isalnum.c bool/ft_isalpha.c bool/ft_isascii.c bool/ft_isdigit.c \
	bool/ft_islower.c bool/ft_isprint.c bool/ft_isspace.c bool/ft_isupper.c \
	get/ft_getalpha.c get/ft_gethex.c \
	math/ft_hypot.c math/ft_iterfact.c math/ft_iterpow.c math/ft_lcm.c \
	math/ft_ln.c math/ft_log10.c math/ft_log2.c math/ft_max.c math/ft_mean.c \
	math/ft_min.c math/ft_abs.c math/ft_pow2.c math/ft_acos.c math/ft_acot.c \
	math/ft_acsc.c math/ft_asec.c math/ft_asin.c math/ft_atan2.c math/ft_atan.c \
	math/ft_cbrt.c math/ft_ceil.c math/ft_cos.c math/ft_cosh.c math/ft_exp2.c \
	math/ft_exp.c math/ft_floor.c math/ft_fact.c math/ft_fibon.c math/ft_gcd.c \
	math/ft_hypot.c math/ft_log.c math/ft_pow.c math/ft_range.c math/ft_recfact.c \
	math/ft_round.c math/ft_sin.c math/ft_sinh.c math/ft_sqrt.c math/ft_tan.c \
	math/ft_tanh.c math/ft_ultrange.c \
	mem/ft_memcpy.c mem/ft_memdup.c mem/ft_memmove.c mem/ft_memset.c \
	mem/ft_bzero.c mem/ft_calloc.c mem/ft_freeforall.c mem/ft_memchr.c \
	mem/ft_memclear.c mem/ft_memcmp.c mem/ft_memswap.c mem/ft_realloc.c \
	str/ft_strcmp.c str/ft_strcpy.c str/ft_strdup.c str/ft_strendw.c \
	str/ft_striteri.c str/ft_strjoin.c str/ft_strkcmp.c str/ft_strlcat.c \
	str/ft_strlcpy.c str/ft_strlen.c str/ft_strlower.c str/ft_strmapi.c \
	str/ft_strncmp.c str/ft_strnstr.c str/ft_strrchr.c str/ft_strrem.c \
	str/ft_strrev.c str/ft_strrpl.c str/ft_strsplit.c str/ft_strspn.c \
	str/ft_strstartw.c str/ft_strsub.c str/ft_strtok.c str/ft_strtrim.c \
	str/ft_strupper.c put/ft_printf_fd.c \
	utils/ft_baselen.c utils/ft_getvalue.c utils/ft_joinpath.c \
	utils/ft_process_fd.c utils/ft_skipcset.c utils/ft_tolower.c \
	utils/ft_toupper.c \
	file/ft_fappend.c file/ft_fcopy.c file/ft_fcountline.c file/ft_fcreate.c \
	file/ft_fexists.c file/ft_getnextline.c put/ft_putstr_fd.c \
	put/ft_putnbr_fd.c \
	put/ft_puthex_fd.c \
	put/ft_putchar_fd.c \

OBJ_DIR = obj
# Correctly generate the object files with directory structure under obj/
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

INC_DIR = inc
INC_FLAGS = -I$(INC_DIR)

# Default target
all: $(NAME)

# Rule to build the library
$(NAME): $(OBJ_FILES)
	ar rcs $@ $^

# Rule to build object files, ensuring subdirectories in $(OBJ_DIR) are created
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)         # Create the directory for the object file
	$(CC) $(CFLAGS) $(SANITIZE) $(INC_FLAGS) -c $< -o $@

# Clean object files
clean:
	rm -rf $(OBJ_DIR)

# Full clean (objects + library)
fclean: clean
	rm -f $(NAME)

# Rebuild from scratch
re: fclean all

# Specify default target
.PHONY: all clean fclean re
