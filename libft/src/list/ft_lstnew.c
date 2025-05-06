/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:13:33 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:33:39 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_lstnew
 *
 * @brief Creates a new node for a linked list.
 *

	* This function allocates memory for a new node using `ft_calloc` and initializes its content

	* with the provided `content`. The `next` pointer of the new node is set to NULL. If memory
 * allocation fails, the function returns NULL.
 *
 * @param content (void *) : The content to be stored in the new node.
 *
 * @return (t_linked_list *) : A pointer to the newly created node,
	or NULL if the allocation fails.
 */
t_linked_list	*ft_lstnew(void *content)
{
	t_linked_list *elem;

	elem = ft_calloc(1, sizeof(t_linked_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}