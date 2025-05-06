/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:33:14 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 05:59:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	handle_pipe_operator(t_token **tokens, const char *line, int *i);
static int	handle_ampersand_operator(t_token **tokens, const char *line,
				int *i);
static int	handle_redirection_operator(t_token **tokens, const char *line,
				int *i);
static int	handle_paren_operator(t_token **tokens, const char *line, int *i);
static int	handle_wildcard_operator(t_token **tokens, const char *line,
				int *i);
static int	handle_operator(t_token **tokens, const char *line, int *i);
static int	handle_word(t_token **tokens, const char *line, int *i);
static int	handle_quotes(t_token **tokens, const char *line, int *i);
static int	handle_word_while(t_token **tokens, const char *line, int *i,
				int start);
static int	handle_double_quotes(t_token **tokens, const char *line, int *i,
				int start);
static int	handle_single_quotes(t_token **tokens, const char *line, int *i,
				int start);
static int	handle_env_variable(t_token **tokens, const char *line, int *i,
				int start);
static int	handle_env(t_token **tokens, const char *line, int *i);
t_token		*ft_lexer(const char *line);

static int	handle_pipe_operator(t_token **tokens, const char *line, int *i)
{
	if (line[*i] == '|' && line[*i + 1] == '|')
	{
		add_token(tokens, OR, "||");
		(*i) += 2;
		return (1);
	}
	if (line[*i] == '|')
	{
		add_token(tokens, PIPE, "|");
		(*i)++;
		return (1);
	}
	return (0);
}

static int	handle_ampersand_operator(t_token **tokens, const char *line,
		int *i)
{
	if (line[*i] == '&' && line[*i + 1] == '&')
	{
		add_token(tokens, AND, "&&");
		(*i) += 2;
		return (1);
	}
	if (line[*i] == '&')
	{
		add_token(tokens, AMPERSAND, "&");
		(*i)++;
		return (1);
	}
	return (0);
}

static int	handle_redirection_operator(t_token **tokens, const char *line,
		int *i)
{
	if (line[*i] == '>' && line[*i + 1] == '>')
	{
		add_token(tokens, APPEND, ">>");
		(*i) += 2;
		return (1);
	}
	if (line[*i] == '>')
	{
		add_token(tokens, REDIR_OUT, ">");
		(*i)++;
		return (1);
	}
	if (line[*i] == '<' && line[*i + 1] == '<')
	{
		add_token(tokens, HEREDOC, "<<");
		(*i) += 2;
		return (1);
	}
	if (line[*i] == '<')
	{
		add_token(tokens, REDIR_IN, "<");
		(*i)++;
		return (1);
	}
	return (0);
}

static int	handle_paren_operator(t_token **tokens, const char *line, int *i)
{
	if (line[*i] == '(')
	{
		add_token(tokens, PAREN_LEFT, "(");
		(*i)++;
		return (1);
	}
	if (line[*i] == ')')
	{
		add_token(tokens, PAREN_RIGHT, ")");
		(*i)++;
		return (1);
	}
	return (0);
}

static int	handle_wildcard_operator(t_token **tokens, const char *line, int *i)
{
	if (line[*i] == '*')
	{
		add_token(tokens, WILDCARD, "*");
		(*i)++;
		return (1);
	}
	return (0);
}

static int	handle_operator(t_token **tokens, const char *line, int *i)
{
	if (handle_pipe_operator(tokens, line, i))
		return (1);
	if (handle_ampersand_operator(tokens, line, i))
		return (1);
	if (handle_redirection_operator(tokens, line, i))
		return (1);
	if (handle_paren_operator(tokens, line, i))
		return (1);
	if (handle_wildcard_operator(tokens, line, i))
		return (1);
	return (0);
}
static int	handle_word_while(t_token **tokens, const char *line, int *i,
		int start)
{
	char	*str;

	while (line[*i] && !ft_isspace(line[*i]))
	{
		if (line[*i] == '(' || line[*i] == ')' || line[*i] == '*'
			|| line[*i] == '>' || line[*i] == '<' || line[*i] == '&'
			|| line[*i] == '|')
			break ;
		if (line[*i] == '\'' || line[*i] == '"')
			break ;
		(*i)++;
	}
	str = ft_strsub(line, start, *i - start);
	if (str)
	{
		add_token(tokens, WORD, str);
		free(str);
		return (1);
	}
	return (0);
}

static int	handle_single_quotes(t_token **tokens, const char *line, int *i,
		int start)
{
	char	*str;

	(*i)++;
	while (line[*i] && line[*i] != '\'')
		(*i)++;
	if (line[*i] == '\'')
	{
		str = ft_strsub(line, start + 1, *i - start - 1);
		add_token(tokens, WORD, str);
		free(str);
		(*i)++;
		return (1);
	}
	return (0);
}

static int	handle_double_quotes(t_token **tokens, const char *line, int *i,
		int start)
{
	char	*str;

	(*i)++;
	while (line[*i] && line[*i] != '"')
	{
		if (line[*i] == '$')
			handle_env(tokens, line, i);
		else
			(*i)++;
	}
	if (line[*i] == '"')
	{
		str = ft_strsub(line, start + 1, *i - start - 1);
		add_token(tokens, WORD, str);
		free(str);
		(*i)++;
		return (1);
	}
	return (0);
}

static int	handle_quotes(t_token **tokens, const char *line, int *i)
{
	int		start;
	char	quote;

	start = *i;
	quote = line[*i];
	if (quote == '"')
		return (handle_double_quotes(tokens, line, i, start));
	else if (quote == '\'')
		return (handle_single_quotes(tokens, line, i, start));
	return (0);
}

static int	handle_word(t_token **tokens, const char *line, int *i)
{
	int	start;

	start = *i;
	if (line[*i] == '\'' || line[*i] == '"')
		return (handle_quotes(tokens, line, i));
	return (handle_word_while(tokens, line, i, start));
}

static int	handle_env_variable(t_token **tokens, const char *line, int *i,
		int start)
{
	char	*var_name;

	var_name = ft_strsub(line, start, *i - start);
	if (!var_name)
		return (0);
	add_token(tokens, VAR, var_name);
	return (1);
}

static int	handle_env(t_token **tokens, const char *line, int *i)
{
	int		start;
	char	*var_name;

	if (line[*i] != '$')
		return (0);
	(*i)++;
	if (line[*i] == '?')
	{
		var_name = ft_strdup("?");
		if (!var_name)
			return (0);
		add_token(tokens, VAR, var_name);
		(*i)++;
		return (1);
	}
	start = *i;
	while (line[*i] && (ft_isalnum(line[*i]) || line[*i] == '_'))
		(*i)++;
	if (start == *i)
		return (0);
	return (handle_env_variable(tokens, line, i, start));
}

t_token	*ft_lexer(const char *line)
{
	t_token	*tokens;
	int		i;

	tokens = NULL;
	i = 0;
	while (line[i])
	{
		if (ft_isspace(line[i]))
			i++;
		else if (handle_operator(&tokens, line, &i))
			continue ;
		else if (handle_word(&tokens, line, &i))
			continue ;
		else if (handle_env(&tokens, line, &i))
			continue ;
		else
			i++;
	}
	return (tokens);
}
