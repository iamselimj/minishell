/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrpl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:11:27 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 01:20:05 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strrpl
 * @brief Replaces the first occurrence of a substring with another string.
 *

	* This function searches for the first occurrence of the substring `old` in the string `str` and replaces it with `new`.

	* It allocates a new string with the combined length of the `new` string and the remaining part of `str` after the `old` substring.
 * If the substring `old` is not found at the beginning of the string,
	it returns a duplicate of the original string.
 *
 * @param str (const char *) : The string in which the replacement will occur.
 * @param old (const char *) : The substring to be replaced.
 * @param new (const char *) : The substring that will replace `old`.
 *

	* @return (char *) : A new string with the first occurrence of `old` replaced by `new`,
	or a duplicate of the original string if no replacement occurs.
 */
char	*ft_strrpl(const char *str, const char *old, const char *new)
{
	size_t	old_len;
	size_t	new_len;
	size_t	rest_len;
	char	*result;

	old_len = ft_strlen(old);
	new_len = ft_strlen(new);
	if (ft_strncmp(str, old, old_len) != 0)
		return (ft_strdup(str));
	rest_len = ft_strlen(str) - old_len;
	result = (char *)ft_calloc(1, new_len + rest_len + 1);
	if (!result)
		return (NULL);
	ft_strcpy(result, new);
	ft_strcpy(result + new_len, str + old_len);
	return (result);
}
