/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:28:39 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_addenv
 * @brief Adds a new environment variable to the existing environment array.
 *
 * This function dynamically allocates a new environment array large enough
 * to accommodate the existing environment variables plus one new variable.
 * It copies the existing variables to the new array, adds the new variable,
 * and then frees the old environment array. The new environment array is
 * stored in the pointer passed as a parameter.
 *
 * @params env (char **) : A pointer to the environment array.
 * @params new_var (const char *) : The new environment variable to add.
 *

	* @return (int) : Returns 0 if the new environment variable is successfully added,
 *                or -1 if an error occurs (e.g., memory allocation failure).
 */
int	ft_addenv(char **env, const char *new_var)
{
	size_t	i;
	size_t	count;
	char	**new_env;

	count = ft_envlen(env);
	new_env = (char **)ft_calloc(count + 2, sizeof(char *));
	if (!new_env)
		return (-1);
	i = 0;
	while (i < count)
	{
		new_env[i] = env[i];
		i++;
	}
	new_env[count] = ft_strdup(new_var);
	if (!new_env[count])
	{
		free(new_env);
		return (-1);
	}
	free(env);
	env = new_env;
	return (0);
}
