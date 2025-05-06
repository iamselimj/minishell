/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sdbm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:21:26 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_sdbm
 * @brief Implements the SDBM hash function for strings.
 *

	* This function computes a hash value for the input string `str` using the SDBM hash algorithm.
 * The algorithm applies a combination of bit shifts, additions,
	and subtractions to generate a
 * hash value that is effective for simple hash table use cases.
 *
 * @params str (const char*) : The null-terminated string to hash.
 *
 * @return (unsigned long) : The computed hash value for the string.
 */
unsigned long	ft_sdbm(const char *str)
{
	unsigned long hash;
	int c;

	hash = 0;
	while (*str)
	{
		c = *str++;
		hash = c + (hash << 6) + (hash << 16) - hash;
	}
	return (hash);
}