/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:03:38 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_btree_find
 *
 * @brief Searches for a value in the binary tree.
 *

	* This function recursively searches for a value in the binary tree and returns a pointer to the node
 * containing the value if found,
	or NULL if the value is not present in the tree.
 *
 * @param root (t_btree_node *) : A pointer to the root node of the binary tree.
 * @param value (int) : The value to search for in the binary tree.
 *
 * @return (t_btree_node *) : A pointer to the node containing the value,
	or NULL if the value is not found.
 */
t_btree_node	*ft_btree_find(t_btree_node *root, int value)
{
	if (!root || root->value == value)
		return (root);
	if (value < root->value)
		return (ft_btree_find(root->left, value));
	else
		return (ft_btree_find(root->right, value));
}
