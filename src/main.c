/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:46:07 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 02:18:30 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_free(void *ptr)
{
	if (ptr)
		free(ptr);
}

char	*ft_readline(const char *prompt)
{
	char	*line;

	ft_display_prompt();
	line = readline(prompt);
	return (line);
}

int	main(int ac, char **av, char **envp)
{
	char	**envs;
	char	*line;
	t_token	*tokens;

	(void)ac;
	(void)av;
	ft_sighandlers();
	ft_display_banner();
	envs = ft_dumpenvs(envp);
	(void)envs;
	if (isatty(STDIN_FILENO))
	{
		while (1)
		{
			ft_display_prompt();
			line = readline(CLI);
			tokens = ft_lexer(line);
			print_tokens(tokens);
			free_tokens(tokens);
			add_history(line);
			free(line);
		}
	}
	return (0);
}
