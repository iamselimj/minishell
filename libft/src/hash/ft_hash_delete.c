/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:51:39 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_hash_delete
 *
 * @brief Deletes a key-value pair from the hash table.
 *
 * This function deletes a key-value pair from the hash table.
 *

	* @param table (t_hash_table *) : The hash table from which the key-value pair will be deleted.
 * @param key (const char *) : The key to be deleted.
 */
void	ft_hash_delete(t_hash_table *table, const char *key)
{
	int index = ft_hash_function(key, table->size);
	t_hash_node *current = table->buckets[index];
	t_hash_node *prev = NULL;
	while (current != NULL)
	{
		if (ft_strcmp(current->key, key) == 0)
		{
			if (prev == NULL)
			{
				table->buckets[index] = current->next;
			}
			else
			{
				prev->next = current->next;
			}
			free(current->key);
			free(current->value);
			free(current);
			return ;
		}
		prev = current;
		current = current->next;
	}
}