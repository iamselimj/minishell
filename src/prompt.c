/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:47:14 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 05:59:29 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_display_prompt(void)
{
	char	*home;
	char	*cwd;
	char	*res;

	home = getenv("HOME");
	cwd = getcwd(NULL, 0);
	res = ft_strrpl(cwd, home, "~");
	ft_printf_fd(0, "📂 %s%s%s%s\n", BOLD, CYAN, res, RESET);
	free(cwd);
	free(res);
}
