/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:09:25 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:48:16 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strtok
 * @brief Tokenizes a string using a specified delimiter,
	with non-reentrant behavior.
 *
 * This function returns the next token in the string `str` by breaking it at
 * the delimiter characters defined in `delim`. It uses a static variable to
 * store the state of the string between calls, making it non-reentrant.
 *
 * @param str (char *) : The string to be tokenized. On subsequent calls, this
 *                        parameter should be `NULL`.
 * @param delim (const char *) : The string containing delimiter characters.
 *
 * @return (char *) : A pointer to the next token in the string, or NULL if
 *                    no more tokens are available.
 */
char	*ft_strtok(char *str, const char *delim)
{
	static char	*saved_str = NULL;
	char		*token;

	if (str)
		saved_str = str;
	if (!saved_str)
		return (NULL);
	saved_str = ft_skipdel(saved_str, delim);
	if (*saved_str == '\0')
	{
		saved_str = NULL;
		return (NULL);
	}
	token = saved_str;
	while (*saved_str && !ft_strchr(delim, *saved_str))
		saved_str++;
	if (*saved_str != '\0')
	{
		*saved_str = '\0';
		saved_str++;
	}
	return (token);
}
