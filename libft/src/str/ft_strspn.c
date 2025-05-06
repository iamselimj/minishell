/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:09:56 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strspn
 * @brief Returns the length of the initial segment of the string `s`
 *        that consists only of characters from the string `accept`.
 *

	* This function scans through the string `s` and counts how many characters from

	* the beginning of `s` match any characters in the string `accept`. The function stops
 * when it encounters a character in `s` that is not found in `accept`.
 *
 * @param s (const char *) : The string to be scanned.

	* @param accept (char *) : The string containing the characters to match against.
 *

	* @return (size_t) : The length of the initial segment of `s` that consists of characters

	* from `accept`. The function stops when a character in `s` does not appear in `accept`.
 */
size_t	ft_strspn(const char *s, char *accept)
{
	size_t len;
	char *tmp;

	tmp = accept;
	len = 0;
	while (s[len])
	{
		while (*tmp)
		{
			if (s[len] == *tmp)
				break ;
			tmp++;
		}
		if (*tmp == '\0')
			break ;
		len++;
	}
	return (len);
}