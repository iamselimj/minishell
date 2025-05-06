/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:53:36 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_hash_insert
 *
 * @brief Inserts a key-value pair into the hash table.
 *
 * This function inserts a key-value pair into the hash table.
 *

	* @param table (t_hash_table *) : The hash table into which the key-value pair will be inserted.
 * @param key (const char *) : The key to be inserted.
 * @param value (const char *) : The value to be inserted.
 */
void	ft_hash_insert(t_hash_table *table, const char *key, const char *value)
{
	int index;
	t_hash_node *new_node;

	index = ft_hash_function(key, table->size);
	new_node = (t_hash_node *)malloc(sizeof(t_hash_node));
	new_node->key = ft_strdup(key);
	new_node->value = ft_strdup(value);
	new_node->next = table->buckets[index];
	table->buckets[index] = new_node;
}