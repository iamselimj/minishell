/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fcountline.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:35:21 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_fcountline
 * @brief Counts the number of lines in a file.
 *
 * This function reads the file at the specified path and counts the number of
 * newline characters (`\n`) to determine the number of lines in the file.
 * It returns the count of lines in the file, or -1 if an error occurs (e.g.,
 * the file cannot be opened).
 *
 * @params path (const char *) : The path of the file to count lines in.
 *
 * @return (int) : Returns the number of lines in the file, or -1 on failure.
 */
int	ft_fcountline(const char *path)
{
	int fd;
	int count;
	int bytes_read;
	char buffer[BUFFER_SIZE];
	int i;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	count = 0;
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		i = 0;
		while (i < bytes_read)
		{
			if (buffer[i] == '\n')
				count++;
			i++;
		}
	}
	close(fd);
	return (count);
}