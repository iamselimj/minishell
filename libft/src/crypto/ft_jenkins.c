/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jenkins.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:20:30 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_jenkins
 * @brief Implements the Jenkins One-at-a-Time hash function.
 *

	* This function computes a hash value for the input string `str` using the Jenkins One-at-a-Time

	* hash algorithm. The algorithm processes each character in the string with a combination of
 * addition, bit shifts,
	and XOR operations to ensure a well-distributed hash value.
 *
 * @params str (const char*) : The null-terminated string to hash.
 *
 * @return (unsigned long) : The computed hash value for the string.
 */
unsigned long	ft_jenkins(const char *str)
{
	unsigned long	hash;
	int				c;

	hash = 0; // Initialize the hash value.
	while (*str)
	{
		c = *str++;
		// Get the current character and increment the pointer.
		hash += c;            // Add the current character to the hash.
		hash += (hash << 10); // Left shift the hash and add it to itself.
		hash ^= (hash >> 6);  // Right shift the hash and XOR it with itself.
	}
	hash += (hash << 3);  // Left shift and add.
	hash ^= (hash >> 11); // Right shift and XOR.
	hash += (hash << 15); // Final left shift and add to hash.
	return (hash);        // Return the final hash value.
}
