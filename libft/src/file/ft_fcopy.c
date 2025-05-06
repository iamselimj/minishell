/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fcopy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:35:17 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_fcopy
 * @brief Copies the contents of one file to another.
 *
 * This function opens the source file in read-only mode and the destination
 * file in write-only mode. It reads the contents of the source file in chunks
 * and writes them to the destination file. If any error occurs during reading
 * or writing, it returns -1.
 *
 * @params src (const char *) : The path of the source file.
 * @params dst (const char *) : The path of the destination file.
 *
 * @return (int) : Returns 0 on success, -1 on failure.
 */
int	ft_fcopy(const char *src, const char *dst)
{
	int src_fd;
	int dst_fd;
	char buf[1024];
	ssize_t read_bytes;

	src_fd = open(src, O_RDONLY);
	if (src_fd == -1)
		return (-1);
	dst_fd = open(dst, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (dst_fd == -1)
		return (close(src_fd), -1);
	while ((read_bytes = read(src_fd, buf, sizeof(buf))) > 0)
		if (write(dst_fd, buf, read_bytes) == -1)
			return (close(src_fd), close(dst_fd), -1);
	return (close(src_fd), close(dst_fd), 0);
}