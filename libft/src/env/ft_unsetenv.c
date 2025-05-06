/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:31:13 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_unsetenv
 * @brief Removes an environment variable from the environment array.
 *

	* This function searches for an environment variable by its name in the provided
 * environment array. If the variable is found, it is removed from the array.
 * The remaining variables are shifted accordingly to maintain continuity in the
 * array. If the variable is not found, the array remains unchanged.
 *
 * @params env (char ***) : A pointer to the environment array to modify.
 * @params name (const char *) : The name of the environment variable to remove.
 *

	* @return (int) : Returns 0 if the environment variable was successfully removed,
 *                 or -1 if an error occurred (e.g.,
	invalid input or memory allocation failure).
 */
int	ft_unsetenv(char ***env, const char *name)
{
	size_t i;
	size_t j;
	size_t count;
	char **new_env;

	if (!env || !*env || !name)
		return (-1);
	count = ft_envlen(*env);
	new_env = (char **)ft_calloc(count, sizeof(char *));
	if (!new_env)
		return (-1);
	i = 0;
	j = 0;
	while ((*env)[i])
	{
		if (!ft_strkeycmp((*env)[i], name))
			free((*env)[i]);
		else
			new_env[j++] = (*env)[i];
		i++;
	}
	new_env[j] = NULL;
	free(*env);
	*env = new_env;
	return (0);
}