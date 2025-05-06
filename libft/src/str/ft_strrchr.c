/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:11:27 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:06:38 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strrchr
 * @brief Locates the last occurrence of a character in a string.
 *

	* This function searches for the last occurrence of the character `c` in the string `str`.

	* It returns a pointer to the last occurrence of `c` within `str`. If `c` is not found in the string,
 * it returns `NULL`. If `c` is the null-terminator (`'\0'`),
	the function returns a pointer to the
 * terminating null character at the end of the string.
 *
 * @param str (const char *) : The string to search.
 * @param c (int) : The character to search for. It is passed as an integer,
	but is cast to a `char` internally.
 *

	* @return (char *) : A pointer to the last occurrence of the character `c` in the string `str`,
	or `NULL`
 * if `c` is not found.
 */

char	*ft_strrchr(const char *str, int c)
{
	char	*res;
	char	cc;

	cc = (char)c;
	res = NULL;
	while (*str)
	{
		if (*str == cc)
			res = (char *)str;
		str++;
	}
	if (cc == '\0')
		return ((char *)str);
	return (res);
}
