/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_inorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:42:35 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_btree_inorder
 *
 * @brief Performs an in-order traversal of the binary tree.
 *
 * This function performs an in-order traversal of the binary tree,
	printing the value of each node.
 *
 * @param root (t_btree_node *) : A pointer to the root node of the binary tree.
 */
void	ft_btree_inorder(t_btree_node *root)
{
	if (!root)
		return ;
	ft_btree_inorder(root->left);
	printf("%d ", root->value);
	ft_btree_inorder(root->right);
}