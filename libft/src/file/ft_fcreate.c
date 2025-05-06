/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fcreate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:35:09 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_fcreate
 * @brief Creates a new file at the specified path and writes a line to it.
 *
 * This function creates a new file at the specified path, overwriting any
 * existing file. It writes the provided line to the file. The file permissions
 * are set to 0644 (readable and writable by the owner, readable by others).
 *
 * @params path (const char *) : The path of the file to create.
 * @params line (char *) : The line of text to write to the file.
 *
 * @return (int) : Returns 0 on success, -1 on failure (e.g.,
	file creation error).
 */
int	ft_fcreate(const char *path, char *line)
{
	int fd;

	fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (-1);
	if (write(fd, line, ft_strlen(line)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (0);
}