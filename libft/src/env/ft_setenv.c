/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:30:44 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_setenv
 * @brief Sets or updates an environment variable in the environment array.
 *

	* This function checks if an environment variable with the given name already exists
 * in the environment array. If it does,
	the function updates its value. If it does
 * not exist,
	the function adds a new environment variable to the array. The new or
 * updated environment variable is constructed by joining the variable name with
 * the provided value, separated by an '=' character.
 *
 * @params env (char **) : A pointer to the environment array to modify.

	* @params name (const char *) : The name of the environment variable to set or update.

	* @params value (const char *) : The value to assign to the environment variable.
 *

	* @return (int) : Returns 0 if the environment variable was successfully set or updated,
 *                 or
	-1 if an error occurred during memory allocation or if any input
 *                 parameter is NULL.
 */
int	ft_setenv(char **env, const char *name, const char *value)
{
	size_t i;
	char *new_var;
	char *new_value;

	if (!env || !name || !value)
		return (-1);
	new_var = ft_strjoin(name, "=");
	if (!new_var)
		return (-1);
	new_value = ft_strjoin(new_var, value);
	free(new_var);
	if (!new_value)
		return (-1);
	i = 0;
	while (env[i])
	{
		if (ft_strkeycmp(env[i], name))
		{
			free(env[i]);
			env[i] = new_value;
			return (0);
		}
		i++;
	}
	return (ft_addenv(env, new_value));
}