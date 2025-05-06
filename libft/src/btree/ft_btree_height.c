/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_height.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:43:06 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_btree_height
 *
 * @brief Calculates the height of the binary tree.
 *

	* This function recursively calculates the height of the binary tree. The height of a tree is defined
 * as the number of edges in the longest path from the root to a leaf.
 *
 * @param root (t_btree_node *) : A pointer to the root node of the binary tree.
 *
 * @return (int) : The height of the binary tree.
 */
int	ft_btree_height(t_btree_node *root)
{
	int	left_height;
	int	right_height;

	if (!root)
		return (-1);
	left_height = ft_btree_height(root->left);
	right_height = ft_btree_height(root->right);
	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
