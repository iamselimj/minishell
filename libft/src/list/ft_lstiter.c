/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:17:58 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:31:18 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_lstiter

	* @brief Iterates through a linked list and applies a function to each node's content.
 *

	* This function iterates through the linked list pointed to by `lst` and applies the
 * function `f` to the content of each node. If `lst` or `f` is NULL,
	the function does
 * nothing. The function uses a temporary pointer `tmp` to traverse the list.
 *

	* @param lst (t_linked_list *) : A pointer to the first node of the linked list.

	* @param f (void (*)(void *)) : A pointer to the function to be applied to each node's content.
 */
void	ft_lstiter(t_linked_list *lst, void (*f)(void *))
{
	t_linked_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
