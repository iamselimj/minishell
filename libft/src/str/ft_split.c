/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:05:51 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:00:28 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function word_count
 * @brief Counts the number of words in a string based on a separator.
 *
 * This helper function counts how many words are in the string `s`,
	where words are
 * defined as substrings separated by the specified separator `sep`.
 *
 * @param s (const char *) : The string to process.
 * @param sep (char) : The separator character.
 *
 * @return (size_t) : The number of words in the string.
 */
static size_t	word_count(const char *s, char sep)
{
	size_t		count;
	const char	*str;

	if (!s)
		return (0);
	count = 0;
	str = s;
	while (*str)
	{
		while (*str && (*str == sep))
			str++;
		if (*str)
			count++;
		while (*str && !(*str == sep))
			str++;
	}
	return (count);
}

/**
 * @function word_len
 * @brief Computes the length of the next word in a string.
 *

	* This helper function calculates the length of the next word in the string `s` until
 * it encounters the separator `sep`.
 *
 * @param s (const char *) : The string to process.
 * @param sep (char) : The separator character.
 *
 * @return (size_t) : The length of the next word.
 */

static size_t	word_len(const char *s, char sep)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len] && !(s[len] == sep))
		len++;
	return (len);
}

/**
 * @function fill_word
 * @brief Copies a word from the string to a newly allocated memory space.
 *

	* This helper function creates a new string containing a word from the input string `s`,

	* based on the separator `sep`. It returns a newly allocated string containing the word.
 *
 * @param s (const char *) : The string to process.
 * @param sep (char) : The separator character.
 *
 * @return (char *) : A dynamically allocated string containing the word,
	or NULL if allocation fails.
 */
static char	*fill_word(const char *s, char sep)
{
	size_t	len;
	char	*word;
	char	*unoffset_word;

	len = word_len(s, sep);
	word = (char *)ft_calloc((len + 1), sizeof(char));
	if (!word)
		return (NULL);
	unoffset_word = word;
	while (len-- > 0)
		*(word++) = *(s++);
	return ((char *)unoffset_word);
}

static char	**ft_free_split(char **tab)
{
	char	**unoffset_tab;

	unoffset_tab = tab;
	while (*unoffset_tab)
		free(*unoffset_tab++);
	free(tab);
	return (NULL);
}

/**
 * @function ft_split
 * @brief Splits a string into an array of strings based on a separator.
 *

	* This function splits the input string `s` into an array of substrings using the

	* specified separator `c`. The resulting array of strings is dynamically allocated,
 * and each substring is null-terminated. If any memory allocation fails,
	the function
 * frees all previously allocated memory and returns NULL.
 *
 * @param s (char const *) : The string to split.
 * @param c (char) : The separator character used to split the string.
 *

	* @return (char **) : A dynamically allocated array of substrings (strings) resulting
 *         from the split. The array is null-terminated. If an error occurs,
	returns NULL.
 */
char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	**unoffset_tab;

	if (!s)
		return (NULL);
	tab = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	unoffset_tab = tab;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s)
		{
			*tab = fill_word(s, c);
			if (!*tab)
				return (ft_free_split(unoffset_tab));
			tab++;
		}
		while (*s && !(*s == c))
			s++;
	}
	*tab = NULL;
	return (unoffset_tab);
}
