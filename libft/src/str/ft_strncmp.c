/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:06:04 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strncmp
 * @brief Compares two strings up to a specified number of characters.
 *

	* This function compares the first `size` characters of two strings. If one string is shorter than the
 * specified `size`,
	the comparison stops when the null-terminator is encountered. The comparison is done
 * lexicographically (character by character),
	and the function returns the difference between the first

	* differing characters or 0 if the strings are equal up to the specified number of characters.
 *
 * @param str1 (const char *) : The first string to compare.
 * @param str2 (const char *) : The second string to compare.
 * @param size (size_t) : The maximum number of characters to compare.
 *
 * @return (int) : The difference between the first non-matching characters,
	or 0 if the strings are equal.
 */

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	while ((str1[i] || str2[i]) && i < size)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
