/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnv1a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:19:43 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_fnv1a
 * @brief Implements the FNV-1a hashing algorithm for strings.
 *

	* This function computes a hash value for the input string `str` using the FNV-1a algorithm.

	* The FNV-1a algorithm involves XOR'ing each byte of the string with the current hash,

	* then multiplying the result by a prime number. This process is repeated for every byte
 * in the string.
 *
 * @params str (const char*) : The null-terminated string to hash.
 *
 * @return (unsigned long) : The computed hash value for the string.
 */
unsigned long	ft_fnv1a(const char *str)
{
	unsigned long hash;
	int c;

	hash = 14695981039346656037U;
	while (*str)
	{
		c = *str++;
		hash ^= (unsigned char)c;
		hash *= 1099511628211U;
	}
	return (hash);
}