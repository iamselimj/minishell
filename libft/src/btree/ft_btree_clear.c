/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:42:20 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_btree_clear
 *
 * @brief Frees the memory allocated for the binary tree.
 *

	* This function recursively frees the memory allocated for each node in the binary tree.
 *
 * @param root (t_btree_node *) : A pointer to the root node of the binary tree.
 */
void	ft_btree_clear(t_btree_node *root)
{
	if (!root)
		return ;
	ft_btree_clear(root->left);
	ft_btree_clear(root->right);
	free(root);
}