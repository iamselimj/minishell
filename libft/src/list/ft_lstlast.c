/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:16:30 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:33:10 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_lstlast
 *
 * @brief Returns the last node of a linked list.
 *

	* This function traverses the linked list pointed to by `lst` and returns the last node.
 * If `lst` is NULL,
	the function returns NULL. The function uses a temporary pointer `tmp`
 * to traverse the list until it reaches the last node.
 *

	* @param lst (t_linked_list *) : A pointer to the first node of the linked list.
 *
 * @return (t_linked_list *) : A pointer to the last node of the linked list,
	or NULL if the list is empty.
 */
t_linked_list	*ft_lstlast(t_linked_list *lst)
{
	t_linked_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
