/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenvs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:30:08 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_getenvs
 * @brief Retrieves the value of an environment variable.
 *
 * This function searches for an environment variable by its name in the
 * global `environ` array, which contains the environment variables. If the
 * variable is found, the function returns the value associated with it (i.e.,
 * the part after the '=' character). If the variable is not found,
	it returns NULL.
 *

	* @params name (const char *) : The name of the environment variable to search for.
 *
 * @return (char *) : A pointer to the value of the environment variable,
	or NULL
 *                    if the variable is not found.
 */
char	*ft_getenvs(const char *name)
{
	int i;
	int len;
	extern char **environ;

	len = ft_strlen(name);
	i = 0;
	while (environ[i])
	{
		if (ft_strncmp(environ[i], name, len) == 0 && environ[i][len] == '=')
			return (environ[i] + len + 1);
		i++;
	}
	return (NULL);
}