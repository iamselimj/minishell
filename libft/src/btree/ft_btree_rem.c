/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_rem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:42:02 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_btree_remove
 *
 * @brief Deletes a value from the binary tree.
 *

	* This function deletes a value from the binary tree by finding the node containing the value and
 * removing it. It handles three cases: the node has no children, one child,
	or two children.
 *

	* @param root (t_btree_node **) : A pointer to the root node of the binary tree.
 * @param value (int) : The value to be deleted from the binary tree.
 */
void	ft_btree_remove(t_btree_node **root, int value)
{
	t_btree_node *temp;
	t_btree_node *successor;

	if (!root)
		return ;
	if (value < (*root)->value)
		ft_btree_remove(&(*root)->left, value);
	else if (value > (*root)->value)
		ft_btree_remove(&(*root)->right, value);
	else
	{
		temp = *root;
		if (!(*root)->left)
			*root = (*root)->right;
		else if (!(*root)->right)
			*root = (*root)->left;
		else
		{
			successor = (*root)->right;
			while (successor && successor->left)
				successor = successor->left;
			(*root)->value = successor->value;
			ft_btree_remove(&(*root)->right, successor->value);
		}
		free(temp);
	}
}