/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:16:45 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:29:25 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_lstadd_back
 * @brief Adds a new node to the end of a linked list.
 *

	* This function appends the `new` node to the end of the linked list pointed to by `lst`.
 * If `lst` or `new` is NULL, the function does nothing. If the list is empty,
	`new` becomes
 * the first node. Otherwise,
	the function traverses the list to find the last node and
 * sets its `next` pointer to `new`.
 *

	* @param lst (t_linked_list **) : A pointer to the pointer to the first node of the linked list.

	* @param new (t_linked_list *) : A pointer to the new node to be added to the end of the list.
 */
void	ft_lstadd_back(t_linked_list **lst, t_linked_list *new)
{
	t_linked_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
