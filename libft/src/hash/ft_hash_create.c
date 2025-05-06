/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:14:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_hash_create
 *
 * @brief Creates a new hash table.
 *
 * This function creates a new hash table with the given size.
 *
 * @param size (int) : The size of the hash table.
 *
 * @return (t_hash_table *) : A pointer to the newly created hash table.
 */
t_hash_table	*ft_hash_create(int size)
{
	t_hash_table *table;

	table = (t_hash_table *)malloc(sizeof(t_hash_table));
	table->buckets = (t_hash_node **)malloc(size * sizeof(t_hash_node *));
	table->size = size;
	for (int i = 0; i < size; i++)
	{
		table->buckets[i] = NULL;
	}
	return (table);
}