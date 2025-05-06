/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:48:22 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 02:20:19 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_token	*new_token(t_token_type type, const char *token)
{
	t_token	*t;

	t = ft_calloc(1, sizeof(t_token));
	if (!token)
		return (NULL);
	t->type = type;
	t->token = ft_strdup(token);
	t->next = NULL;
	return (t);
}

void	add_token(t_token **tokens, t_token_type type, const char *token)
{
	t_token	*new;
	t_token	*last;

	if (!tokens)
		return ;
	new = new_token(type, token);
	if (!new)
		return ;
	if (!*tokens)
		*tokens = new;
	else
	{
		last = *tokens;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}

void	free_tokens(t_token *tokens)
{
	t_token	*tmp;

	while (tokens)
	{
		tmp = tokens;
		tokens = tokens->next;
		if (tmp->token)
			free(tmp->token);
		free(tmp);
	}
}

void	print_tokens(t_token *tokens)
{
	while (tokens)
	{
		printf("\t Type: %d \t token: \"%s\" \n", tokens->type, tokens->token);
		tokens = tokens->next;
	}
}
