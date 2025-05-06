/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2025/04/26 17:40:42 by kerberos          #+#    #+#             */
/*   Updated: 2025/04/26 17:40:42 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "../libft/inc/libft.h"
# include <fcntl.h>
# include <readline/history.h>
# include <readline/readline.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <time.h>
# include <unistd.h>

# define CLI "\033[32m>\033[0m "

// Reset
# define RESET "\033[0m"

// Bold
# define BOLD "\e[1m"

// Regular Colors
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
# define PURPLE "\033[35m"

typedef enum e_type_token
{
	WORD,
	PIPE,
	AND,
	OR,
	REDIR_IN,
	REDIR_OUT,
	APPEND,
	HEREDOC,
	PAREN_LEFT,
	PAREN_RIGHT,
	WILDCARD,
	AMPERSAND,
	VAR,
} t_token_type;

typedef struct s_token
{
	t_token_type type;
	char *token;
	struct s_token *next;
} t_token;

typedef struct s_ast_node
{
	char *cmd;
	char **args;
	struct t_ast_node *right;
	struct t_ast_node *left;
} t_ast_node;

char	*ft_substr(const char *s, unsigned int start, size_t len);
t_token	*new_token(t_token_type type, const char *str);
void	add_token(t_token **tokens, t_token_type type, const char *str);
void	print_tokens(t_token *tokens);
void	free_tokens(t_token *tokens);

// LEXER
t_token	*ft_lexer(const char *line);

// PARSER

// SIGNAL
void	ft_sighandlers(void);

// PROMPT + BANNER
void	ft_display_prompt(void);
void	ft_display_banner(void);

// UTILS
size_t	ft_count_env(char **env);
int	ft_isquote(int c);
int	ft_isoperator(int c);
char	*ft_strrpl(const char *str, const char *to_rep, const char *rep);

#endif
