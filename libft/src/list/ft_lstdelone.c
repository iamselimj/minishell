/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:16:57 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:30:57 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_lstdelone
 * @brief Deletes and frees a single node of a linked list.
 *
 * This function deletes and frees the memory of the node pointed to by `lst`

	* using the provided `del` function to delete the content of the node. If `lst` or `del`
 * is NULL,
	the function does nothing. The function first calls `del` to delete the
 * content of the node and then frees the node itself.
 *
 * @param lst (t_linked_list *) : A pointer to the node to be deleted.

	* @param del (void (*)(void *)) : A pointer to the function used to delete the content of the node.
 */
void	ft_lstdelone(t_linked_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}