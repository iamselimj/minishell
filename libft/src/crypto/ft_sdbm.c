/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sdbm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:15:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Computes the SDBM hash for a string.
 *
 * @param str (const char*) : The string to hash.
 *
 * @return (unsigned long) : The computed hash value.
 */
unsigned long	ft_sdbm(const char *str)
{
	unsigned long	hash;
	int				c;

	hash = 0;
	while (*str)
	{
		c = *str++;
		hash = c + (hash << 6) + (hash << 16) - hash;
	}
	return (hash);
}
