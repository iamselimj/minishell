/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_level.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:42:50 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_btree_level
 *
 * @brief Performs a level-order traversal of the binary tree.
 *
 * This function performs a level-order traversal of the binary tree,
	printing the value of each node.
 * It uses a queue to keep track of the nodes at each level.
 *
 * @param root (t_btree_node *) : A pointer to the root node of the binary tree.
 */
void	ft_btree_level(t_btree_node *root)
{
	int front;
	t_btree_node **queue;
	t_btree_node *current;

	front = 0;
	if (!root)
		return ;
	queue = (t_btree_node **)ft_calloc(100, sizeof(t_btree_node *));
	queue[front++] = root;
	while (front > 0)
	{
		current = queue[--front];
		printf("%d\n", current->value);
		if (current->left)
			queue[front++] = current->left;
		if (current->right)
			queue[front++] = current->right;
	}
	free(queue);
}