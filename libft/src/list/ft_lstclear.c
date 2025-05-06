/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:17:06 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:30:39 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_lstclear
 * @brief Deletes and frees all nodes of a linked list.
 *

	* This function deletes and frees all the nodes of the linked list pointed to by `lst`

	* using the provided `del` function to delete the content of each node. If `lst` or `del`
 * is NULL, the function does nothing. The function iterates through the list,
	deleting
 * each node and updating the head pointer until the list is empty.
 *

	* @param lst (t_linked_list **) : A pointer to the pointer to the first node of the linked list.

	* @param del (void (*)(void *)) : A pointer to the function used to delete the content of a node.
 */
void	ft_lstclear(t_linked_list **lst, void (*del)(void *))
{
	t_linked_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
