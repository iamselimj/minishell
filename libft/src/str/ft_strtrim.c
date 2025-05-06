/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacquet <sjacquet@student.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:04:22 by sjacquet          #+#    #+#             */
/*   Updated: 2024/11/04 14:04:22 by sjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function new_str

	* @brief Creates a new string by copying a section of `s1` from index `start` to `end`.
 *
 * This function allocates memory for a new string and copies a substring of

	* `s1` starting from index `start` and ending at `end` (inclusive). If the length
 * of the substring is 0 or the start is out of bounds,
	it returns an empty string.
 *
 * @param s1 (const char *) : The source string to extract the substring from.
 * @param start (size_t) : The starting index of the substring.
 * @param end (size_t) : The ending index of the substring (inclusive).
 *

	* @return (char *) : A newly allocated string containing the extracted substring,
 *                    or an empty string if the length is 0.
 */
static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

/**
 * @function to_trim
 * @brief Checks if a character `c` is present in the set of characters `set`.
 *

	* This function checks if the character `c` exists in the string `set`. If it does,
 * it returns 1 (indicating the character should be trimmed). If not,
	it returns 0.
 *
 * @param set (const char *) : The string containing the set of characters.
 * @param c (char) : The character to check.
 *
 * @return (int) : 1 if `c` is found in `set`, 0 otherwise.
 */
static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * @function ft_strtrim
 * @brief Trims the characters in `set` from the beginning and end of `s1`.
 *
 * This function returns a new string with leading and trailing characters from
 * `set` removed from the string `s1`. If either `s1` or `set` is NULL, the
 * function returns NULL. If `s1` is an empty string,
	it returns an empty string.
 *
 * @param s1 (const char *) : The string to be trimmed.
 * @param set (const char *) : The set of characters to be trimmed from `s1`.
 *
 * @return (char *) : A new string with characters from `set` removed from both
 *                    ends of `s1`, or NULL if memory allocation fails.
 */
char	*ft_strtrim(const char *s1, const char *set)
{
	int i;
	int j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j]))
		j--;
	return (new_str(s1, i, j - (i - 1)));
}