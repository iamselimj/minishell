/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:09:25 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:15:08 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function skip_delimiters
 * @brief Skips over any delimiters in the string `str`.
 *
 * This function moves the pointer `str` forward until it points to a character
 * that is not in the `delim` string.
 *
 * @param str (char *) : The string to be processed.
 * @param delim (const char *) : The string containing delimiters.
 *
 * @return (char *) : The pointer to the first non-delimiter character in `str`.
 */
char	*skip_delimiters(char *str, const char *delim)
{
	while (*str && ft_strchr(delim, *str))
		str++;
	return (str);
}

/**
 * @function ft_strtok_r
 * @brief Tokenizes a string using a specified delimiter,
	with reentrant behavior.
 *
 * This function returns the next token in the string `str` by breaking it at
 * the delimiter characters defined in `delim`. It uses `saveptr` to maintain
 * the state of the string between calls, making it reentrant.
 *
 * @param str (char *) : The string to be tokenized. On subsequent calls, this
 *                        parameter should be `NULL`.
 * @param delim (const char *) : The string containing delimiter characters.
 * @param saveptr (char **) : A pointer to a pointer used to save the state of
 *                            the string between calls.
 *
 * @return (char *) : A pointer to the next token in the string, or NULL if
 *                    no more tokens are available.
 */
char	*ft_strtok_r(char *str, const char *delim, char **saveptr)
{
	char	*token;

	if (str != NULL)
		*saveptr = str;
	if (*saveptr == NULL)
		return (NULL);
	*saveptr = skip_delimiters(*saveptr, delim);
	if (**saveptr == '\0')
	{
		*saveptr = NULL;
		return (NULL);
	}
	token = *saveptr;
	while (**saveptr && !ft_strchr(delim, **saveptr))
		(*saveptr)++;
	if (**saveptr != '\0')
	{
		**saveptr = '\0';
		(*saveptr)++;
	}
	return (token);
}
