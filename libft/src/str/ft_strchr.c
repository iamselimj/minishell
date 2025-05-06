/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:09:25 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:02:09 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strchr
 * @brief Locates the first occurrence of a character in a string.
 *

	* This function searches for the first occurrence of the character `c` in the string `str`.
 * If the character is found,
	it returns a pointer to the character's position in the string.
 * If the character is not found, it returns `NULL`.
 *
 * The function searches for the character,
	including checking the null-terminator (`\0`) to ensure
 * the full string is scanned.
 *
 * @param str (const char *) : The string to search in.
 * @param c (int) : The character to locate (passed as an integer).
 *
 * @return (char *) : A pointer to the first occurrence of `c` in the string,
	or `NULL` if not found.
 */
char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == cc)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == cc)
		return ((char *)&str[i]);
	return (NULL);
}
