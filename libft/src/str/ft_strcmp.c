/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:02:24 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strcmp
 * @brief Compares two strings lexicographically.
 *

	* This function compares two null-terminated strings `s1` and `s2` character by character.
 * It returns a negative value if `s1` is lexicographically less than `s2`,
	a positive value
 * if `s1` is greater than `s2`, or 0 if both strings are equal.
 *
 * The comparison stops as soon as a difference is found,
	or when the null-terminator is reached in either string.
 *
 * @param s1 (const char *) : The first string to compare.
 * @param s2 (const char *) : The second string to compare.
 *
 * @return (int) : A negative, positive,
	or zero value depending on the result of the comparison.
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
