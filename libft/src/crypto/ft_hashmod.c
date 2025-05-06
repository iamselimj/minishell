/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:19:27 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_hashmod

	* @brief Computes a hash value for a string and reduces it modulo a specified number.
 *

	* This function first computes a hash value for the input string `str` using the DJB2 algorithm
 * and then reduces the result modulo `mod`. The result will be in the range [0,
	mod-1].
 *
 * @params str (const char*) : The null-terminated string to hash.

	* @params mod (unsigned long) : The modulus to reduce the hash value. It must be non-zero.
 *
 * @return (unsigned long) : The hash value modulo `mod`,
	or 0 if `mod` is invalid.
 */
unsigned long	ft_hashmod(const char *str, unsigned long mod)
{
	unsigned long	hash;

	if (mod == 0)
		return (0);
	hash = ft_djb2(str);
	return (hash % mod);
}
