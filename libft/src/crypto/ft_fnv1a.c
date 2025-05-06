/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnv1a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:15:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Implements the FNV-1a hashing algorithm for strings.
 *
 * @param str (const char*) : The null-terminated string to hash.
 *
 * @return (unsigned long) : The computed hash value for the string.
 */
unsigned long	ft_fnv1a(const char *str)
{
	unsigned long	hash;
	int				c;

	hash = 14695981039346656037U;
	while (*str)
	{
		c = *str++;
		hash ^= (unsigned char)c;
		hash *= 1099511628211U;
	}
	return (hash);
}
