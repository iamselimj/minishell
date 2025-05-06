#****************************************************************************#
##
#:::::::::::# Makefile +::+::+ :#
# By: kerberos <kerberos@student.42.fr> #++:++#+#
# Created: 2024/11/04 15:22:59 by sjacquet #++##+##
# Updated: 2025/04/27 20:32:31 by kerberos ###########.fr#
##
#****************************************************************************#

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRC_DIR = ./src/
OBJ_DIR = ./obj/

# List of source files
    SRC_FILES =bit/ft_clrbit.c\
                        bit/ft_hexor.c\
                        bit/ft_lshift.c\
                        bit/ft_mask.c\
                        bit/ft_rshift.c\
                        bit/ft_setbit.c\
                        bit/ft_tglbit.c\
                        bit/ft_xor.c\
                        btree/ft_btree_clear.c\
                        btree/ft_btree_find.c\
                        btree/ft_btree_height.c\
                        btree/ft_btree_inorder.c\
                        btree/ft_btree_insert.c\
                        btree/ft_btree_level.c\
                        btree/ft_btree_new.c\
                        btree/ft_btree_rem.c\
                        crypto/ft_caesar.c\
                        crypto/ft_djb2.c\
                        crypto/ft_fnv1a.c\
                        crypto/ft_hashmod.c\
                        crypto/ft_jenkins.c\
                        crypto/ft_morse.c\
                        crypto/ft_rot13.c\
                        crypto/ft_sdbm.c\
                        env/ft_addenv.c\
                        env/ft_dumpenvs.c\
                        env/ft_envlen.c\
                        env/ft_getenvs.c\
                        env/ft_setenv.c\
                        env/ft_unsetenv.c\
                        file/ft_fappend.c\
                        file/ft_fcopy.c\
                        file/ft_fcountline.c\
                        file/ft_fcreate.c\
                        file/ft_fempty.c\
                        file/ft_fexists.c\
                        file/ft_ftruncate.c\
                        list/ft_lstadd_back.c\
                        list/ft_lstadd_front.c\
                        list/ft_lstclear.c\
                        list/ft_lstdelone.c\
                        list/ft_lstiter.c\
                        list/ft_lstlast.c\
                        list/ft_lstmap.c\
                        list/ft_lstnew.c\
                        list/ft_lstsize.c\
                        math/ft_abs.c\
                        math/ft_exp.c\
                        math/ft_factorial.c\
                        math/ft_fibonnaci.c\
                        math/ft_find_next_prime.c\
                        math/ft_gcd.c\
                        math/ft_iterative_factorial.c\
                        math/ft_iterative_power.c\
                        math/ft_lcm.c\
                        math/ft_mean.c\
                        math/ft_numlen.c\
                        math/ft_power.c\
                        math/ft_range.c\
                        math/ft_recursive_factorial.c\
                        math/ft_recursive_power.c\
                        math/ft_sqrt.c\
                        mem/ft_bzero.c\
                        mem/ft_calloc.c\
                        mem/ft_free.c\
                        mem/ft_memchr.c\
                        mem/ft_memcmp.c\
                        mem/ft_memcpy.c\
                        mem/ft_memdup.c\
                        mem/ft_memmove.c\
                        mem/ft_memset.c\
                        mem/ft_memswap.c\
                        mem/ft_realloc.c\
                        put/ft_atoi.c\
                        put/ft_atoi_base.c\
                        put/ft_atoi_base_fd.c\
                        put/ft_atol.c\
                        put/ft_itoa.c\
                        put/ft_itoa_base.c\
                        put/ft_itoa_base_fd.c\
                        put/ft_printarr.c\
                        put/ft_printf.c\
                        put/ft_printf_fd.c\
                        put/ft_putchar.c\
                        put/ft_putchar_fd.c\
                        put/ft_putaddr_fd.c\
                        put/ft_putbin_fd.c\
                        put/ft_puthex.c\
                        put/ft_puthex_fd.c\
                        put/ft_putnbr.c\
                        put/ft_putnbr_base_fd.c\
                        put/ft_putnbr_fd.c\
                        put/ft_putnbr_uns.c\
                        put/ft_putoctal_fd.c\
                        put/ft_putstr.c\
                        put/ft_putstr_fd.c\
                        put/ft_putstrnl_fd.c\
                        rand/ft_smrand.c\
                        rand/ft_srand.c\
                        sort/ft_bubblesort.c\
                        sort/ft_heapsort.c\
                        sort/ft_insertsort.c\
                        sort/ft_partition.c\
                        sort/ft_quicksort.c\
                        sort/ft_revtab.c\
                        sort/ft_selecsort.c\
                        sort/ft_sortab.c\
                        str/ft_joinpath.c\
                        str/ft_skipcset.c\
                        str/ft_skipdel.c\
                        str/ft_split.c\
                        str/ft_strcapitalize.c\
                        str/ft_strchr.c\
                        str/ft_strcmp.c\
                        str/ft_strcpy.c\
                        str/ft_strdup.c\
                        str/ft_strendswith.c\
                        str/ft_striteri.c\
                        str/ft_strjoin.c\
                        str/ft_strkeycmp.c\
                        str/ft_strlcat.c\
                        str/ft_strlcpy.c\
                        str/ft_strlen.c\
                        str/ft_strmapi.c\
                        str/ft_strncmp.c\
                        str/ft_strnstr.c\
                        str/ft_strrchr.c\
                        str/ft_strrem.c\
                        str/ft_strrev.c\
                        str/ft_strrpl.c\
                        str/ft_strspn.c\
                        str/ft_strstartswith.c\
                        str/ft_strtok.c\
                        str/ft_strtok_r.c\
                        str/ft_strtrim.c\
                        str/ft_substr.c\
                        str/ft_tolower.c\
                        str/ft_toupper.c\
                        bool/ft_isalnum.c\
                        bool/ft_isalpha.c\
                        bool/ft_isascii.c\
                        bool/ft_isdigit.c\
                        bool/ft_iseven.c\
                        bool/ft_islower.c\
                        bool/ft_isoperator.c\
                        bool/ft_isprime.c\
                        bool/ft_isprint.c\
                        bool/ft_isquote.c\
                        bool/ft_isspace.c\
                        bool/ft_isupper.c\
                        graph/ft_bfs.c\
                        graph/ft_dfs.c\
                        graph/ft_dfs_init.c\
                        graph/ft_dijkstra.c\
                        hash/ft_hash_create.c\
                        hash/ft_hash_delete.c\
                        hash/ft_hash_function.c\
                        hash/ft_hash_insert.c\
                        hash/ft_hash_search.c\
                        queue/ft_dequeue.c\
                        queue/ft_enqueue.c\
                        queue/ft_queue_create.c\

# Generate full path source & object files
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(SRCS:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

# Colors
GREEN = \033[32m
CYAN = \033[36m
RESET = \033[0m

# Main target
all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

# Compile .c into .o
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

# Create obj directory if needed
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Clean object files
clean:
	@rm -rf $(OBJ_DIR)

# Clean everything including the library
fclean: clean
	@rm -f $(NAME)

# Full recompilation
re: fclean all

# Phony targets
.PHONY: all clean fclean re
