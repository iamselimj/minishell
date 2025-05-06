/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnextline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:04:52 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:36:30 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_free_char
 * @brief Frees a dynamically allocated character pointer and returns NULL.
 *

	* This helper function frees a given pointer to memory and returns NULL. It is used
 * to handle memory deallocation for temporary buffers.
 *
 * @params ptr (char *) : The pointer to the memory to be freed.
 *
 * @return (char *) : Returns NULL after freeing the memory.
 */
static char	*ft_free_char(char *ptr)
{
	if (ptr)
		free(ptr);
	return (NULL);
}

/**
 * @function ft_read_file

	* @brief Reads data from a file descriptor into a buffer until a newline is encountered or the end of file is reached.
 *

	* This function repeatedly reads from the given file descriptor into a temporary buffer and appends the data

	* to a growing buffer until a newline character is found or the end of file is reached. It handles buffer memory
 * allocation and ensures proper deallocation.
 *
 * @params fd (int) : The file descriptor to read from.

	* @params buffer (char *) : The current buffer to which read data will be appended.
 *
 * @return (char *) : Returns the updated buffer containing the data read,
	or NULL in case of an error.
 */
static char	*ft_read_file(int fd, char *buffer)
{
	char	*read_buffer;
	char	*temp;
	ssize_t	bytes_read;

	read_buffer = (char *)ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!read_buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(buffer, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (ft_free_char(read_buffer));
		read_buffer[bytes_read] = '\0';
		temp = buffer;
		buffer = ft_strjoin(buffer, read_buffer);
		ft_free_char(temp);
		if (!buffer)
			return (ft_free_char(read_buffer));
	}
	ft_free_char(read_buffer);
	return (buffer);
}

/**
 * @function ft_get_line

	* @brief Extracts a line from the buffer up to and including the newline character.
 *
 * This function searches for a newline character in the buffer and returns a
 * substring of the buffer containing the line up to and including the newline.
 *
 * @params buffer (char *) : The buffer containing the data.
 *
 * @return (char *) : Returns a newly allocated string containing the line,
	or NULL if no line is found.
 */
static char	*ft_get_line(char *buffer)
{
	size_t	len;
	char	*line;

	if (!buffer || !*buffer)
		return (NULL);
	len = 0;
	while (buffer[len] && buffer[len] != '\n')
		len++;
	line = ft_substr(buffer, 0, len + (buffer[len] == '\n'));
	return (line);
}

/**
 * @function ft_trim_buffer

	* @brief Trims the buffer to remove the part that has been processed (up to and including the newline).
 *

	* This function removes the part of the buffer that has already been returned as a line,
	which is the

	* data before and including the newline character. The remaining part of the buffer is returned.
 *
 * @params buffer (char *) : The buffer to be trimmed.
 *
 * @return (char *) : A new buffer with the remaining content after the newline,
	or NULL if the buffer is empty.
 */
static char	*ft_trim_buffer(char *buffer)
{
	char	*new_buffer;
	size_t	len;
	size_t	offset;

	if (!buffer)
		return (NULL);
	len = ft_strlen(buffer);
	offset = 0;
	while (buffer[offset] && buffer[offset] != '\n')
		offset++;
	if (!buffer[offset])
		return (ft_free_char(buffer));
	new_buffer = ft_substr(buffer, offset + 1, len - offset - 1);
	ft_free_char(buffer);
	return (new_buffer);
}

/**
 * @function ft_get_next_line
 * @brief Reads the next line from a file descriptor.
 *

	* This function reads the next line from the file specified by the file descriptor. It keeps track of

	* the file contents using a static buffer and extracts lines one by one. It handles multiple file
 * descriptors by storing separate buffers for each file.
 *
 * @params fd (int) : The file descriptor from which to read.
 *
 * @return (char *) : A newly allocated string containing the next line,
	or NULL if the end of file is reached.
 */
char	*ft_get_next_line(int fd)
{
	static char *buffer_fd[MAX_FD];
	char *line;

	if (fd < 0 || fd >= MAX_FD || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	if (!buffer_fd[fd])
		buffer_fd[fd] = ft_calloc(1, sizeof(char));
	buffer_fd[fd] = ft_read_file(fd, buffer_fd[fd]);
	if (!buffer_fd[fd])
		return (NULL);
	line = ft_get_line(buffer_fd[fd]);
	buffer_fd[fd] = ft_trim_buffer(buffer_fd[fd]);
	return (line);
}