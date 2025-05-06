/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_murmur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:15:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Computes the MurmurHash for a string.
 *
 * @param str (const char*) : The string to hash.
 *
 * @return (unsigned int) : The computed hash value.
 */
unsigned int	ft_murmur(const char *str)
{
	unsigned int	hash;
	int				c;

	hash = 0x12345678;
	while (*str)
	{
		c = *str;
		hash ^= c;
		c = hash;
		hash *= 0x5bd1e995;
		hash ^= hash >> 15;
		str++;
	}
	return (hash);
}
