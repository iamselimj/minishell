/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:14:12 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:29:54 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_lstadd_front
 * @brief Adds a new node to the front of a linked list.
 *

	* This function inserts the `new` node at the beginning of the linked list pointed to by `alst`.
 * If `new` is NULL, the function does nothing. Otherwise,
	it sets the `next` pointer of `new`

	* to the current first node of the list and then updates the list's head pointer to `new`.
 *

	* @param alst (t_linked_list **) : A pointer to the pointer to the first node of the linked list.

	* @param new (t_linked_list *) : A pointer to the new node to be added to the front of the list.
 */
void	ft_lstadd_front(t_linked_list **alst, t_linked_list *new)
{
	if (!new)
		return ;
	new->next = *alst;
	*alst = new;
}