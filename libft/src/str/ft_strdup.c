/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:02:07 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:03:07 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strdup
 * @brief Duplicates a string by allocating memory for a copy of it.
 *

	* This function allocates sufficient memory to hold a copy of the string `s1` and
 * then copies its contents into the newly allocated memory,
	including the null terminator.
 *
 * The function ensures the newly allocated string is properly null-terminated.
 *
 * @param s1 (const char *) : The string to duplicate.
 *
 * @return (char *) : A pointer to the newly allocated string,
	or NULL if memory allocation fails.
 */
char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i;

	dup = (char *)ft_calloc(1, ft_strlen(s1) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
