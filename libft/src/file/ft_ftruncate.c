/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftruncate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:35:42 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_ftruncate
 * @brief Truncates a file to zero length.
 *
 * This function opens the specified file in write-only mode and truncates it
 * to zero length, effectively deleting its contents.
 *
 * @params path (const char *) : The path of the file to truncate.
 *
 * @return (int) : Returns 0 on success, -1 on failure.
 */
int	ft_ftruncate(const char *path)
{
	int fd;

	fd = open(path, O_WRONLY | O_TRUNC);
	if (fd == -1)
		return (-1);
	close(fd);
	return (0);
}