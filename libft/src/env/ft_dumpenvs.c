/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dumpenvs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:23:28 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:29:06 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_dumpenvs
 * @brief Creates a copy of the given environment array.
 *
 * This function allocates memory for a new array of environment variables,
 * copies the content of the original environment array into the new one,
 * and returns a pointer to the new array. If any memory allocation fails,
 * the function frees any previously allocated memory and returns NULL.
 *
 * @params env (char **) : A pointer to the environment array to copy.
 *
 * @return (char **) : Returns a pointer to the new environment array,
 *                      or NULL if an error occurs during allocation or copying.
 */
char	**ft_dumpenvs(char **env)
{
	size_t i;
	size_t count;
	char **copy;

	if (!env)
		return (NULL);
	count = ft_envlen(env);
	copy = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < count)
	{
		copy[i] = ft_strdup(env[i]);
		if (!copy[i])
		{
			while (i > 0)
				free(copy[--i]);
			free(copy);
			return (NULL);
		}
		i++;
	}
	copy[count] = NULL;
	return (copy);
}