/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_envlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:23:28 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:29:25 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_envlen
 * @brief Calculates the length of the environment array.
 *
 * This function counts the number of environment variables in the given
 * environment array (an array of strings, terminated by a NULL pointer).
 * It iterates through the array and returns the count of non-NULL entries.
 *
 * @params env (char **) : A pointer to the environment array to count.
 *
 * @return (size_t) : The number of environment variables in the array.
 */
size_t	ft_envlen(char **env)
{
	size_t	count;

	count = 0;
	while (env && env[count])
		count++;
	return (count);
}
