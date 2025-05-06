/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_search.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:53:57 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_hash_search
 *
 * @brief Searches for a key in the hash table.
 *

	* This function searches for a key in the hash table and returns the corresponding value.
 *
 * @param table (t_hash_table *) : The hash table to be searched.
 * @param key (const char *) : The key to be searched for.
 *
 * @return (char *) : The value corresponding to the key,
	or NULL if the key is not found.
 */
char	*ft_hash_search(t_hash_table *table, const char *key)
{
	int index;
	t_hash_node *current;

	index = ft_hash_function(key, table->size);
	current = table->buckets[index];
	while (current != NULL)
	{
		if (ft_strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}