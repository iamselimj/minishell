/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_function.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:14:31 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_hash_function
 *
 * @brief Computes the hash value for a key.
 *

	* This function computes the hash value for the given key using a simple hash function.
 *
 * @param key (const char *) : The key to be hashed.
 * @param size (int) : The size of the hash table.
 *
 * @return (int) : The hash value of the key.
 */
int	ft_hash_function(const char *key, int size)
{
	unsigned long hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash % size);
}