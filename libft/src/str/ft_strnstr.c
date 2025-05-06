/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:35:20 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:06:21 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strnstr
 * @brief Locates a substring within a string,
	searching up to a specified length.
 *

	* This function finds the first occurrence of the substring `needle` within the string `haystack`,

	* but it will only search within the first `len` characters of `haystack`. If `needle` is an empty
 * string,
	the function returns the `haystack` string. If the substring is found,
	the function returns

	* a pointer to the first character of the found substring. If the substring is not found,
	it returns
 * `NULL`.
 *
 * @param haystack (const char *) : The string in which to search.
 * @param needle (const char *) : The substring to search for.

	* @param len (size_t) : The maximum number of characters to search in `haystack`.
 *

	* @return (char *) : A pointer to the first occurrence of `needle` in `haystack` within the first
 * `len` characters, or `NULL` if `needle` is not found.
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *)haystack + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
