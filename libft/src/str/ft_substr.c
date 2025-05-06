/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:02:35 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:18:50 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_substr

	* @brief Creates a new substring from `s` starting at `start` with a length of `len`.
 *
 * This function allocates a new string and copies a portion of the string `s`,
 * starting from the `start` index,
	up to a maximum of `len` characters. If `start`
 * exceeds the length of `s`,
	an empty string is returned. If `len` is greater than
 * the remaining characters after `start`,
	the function adjusts `len` to copy only
 * the remaining part of the string.
 *

	* @param s (const char *) : The original string from which the substring is created.
 * @param start (unsigned int) : The starting index of the substring in `s`.
 * @param len (size_t) : The maximum length of the substring to be copied.
 *
 * @return (char *) : A newly allocated string containing the substring,
	or NULL if memory allocation fails.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
