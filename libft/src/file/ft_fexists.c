/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fexists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:35:25 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_fexists
 * @brief Checks if a file exists at the given path.
 *
 * This function uses the `access` system call to check if a file exists at
 * the specified path. If the file exists, it returns 1; otherwise,
	it returns 0.
 *
 * @params path (const char *) : The path to the file to check.
 *
 * @return (int) : Returns 1 if the file exists, 0 otherwise.
 */
int	ft_fexists(const char *path)
{
	if (access(path, F_OK) == 0)
		return (1);
	return (0);
}