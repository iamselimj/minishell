/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:41:25 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_btree_insert
 *
 * @brief Inserts a new value into the binary tree.
 *

	* This function inserts a new value into the binary tree by creating a new node if the tree is empty,

	* or by recursively finding the correct position for the new value based on its comparison with existing nodes.
 *

	* @param root (t_btree_node **) : A pointer to the root node of the binary tree.
 * @param value (int) : The value to be inserted into the binary tree.
 */
void	ft_btree_insert(t_btree_node **root, int value)
{
	if (!*root)
		*root = ft_btree_new(value);
	else if (value < (*root)->value)
		ft_btree_insert(&(*root)->left, value);
	else
		ft_btree_insert(&(*root)->right, value);
}