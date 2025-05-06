/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:39:09 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_btree_new
 *
 * @brief Creates a new node for a binary tree.
 *

	* This function allocates memory for a new node using `ft_calloc` and initializes its value

	* with the provided `value`. The `left` and `right` pointers of the new node are set to NULL.
 * If memory allocation fails,
	the function prints an error message and returns NULL.
 *
 * @param value (int) : The value to be stored in the new node.
 *
 * @return (t_btree_node *) : A pointer to the newly created node,
	or NULL if the allocation fails.
 */
t_btree_node	*ft_btree_new(int value)
{
	t_btree_node *new_node;

	new_node = (t_btree_node *)ft_calloc(1, sizeof(t_btree_node));
	if (!new_node)
		return (perror("Failed to create new node"), NULL);
	new_node->value = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}