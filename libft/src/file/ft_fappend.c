/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fappend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:35:13 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_fappend
 * @brief Appends a line to an existing file.
 *
 * This function opens the specified file in append mode and writes the provided
 * line to the end of the file. If the file doesn't exist or there is an error
 * during the write process, it returns -1.
 *
 * @params path (const char *) : The path of the file to append to.
 * @params line (const char *) : The line of text to append to the file.
 *
 * @return (int) : Returns 0 on success, -1 on failure.
 */
int	ft_fappend(const char *path, const char *line)
{
	int fd;

	fd = open(path, O_WRONLY | O_APPEND);
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