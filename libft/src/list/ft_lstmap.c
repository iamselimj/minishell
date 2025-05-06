/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:18:52 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:33:25 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_lstmap
 *

	* @brief Applies a function to each element of a linked list and creates a new list with the results.
 *
 * This function iterates through the linked list pointed to by `lst`,
	applies the function `f` to the
 * content of each node, and creates a new list with the results. If `lst`, `f`,
	or `del` is NULL,

	* the function returns NULL. The function uses `ft_lstnew` to create new nodes and `ft_lstadd_back`
 * to add them to the new list. If memory allocation fails,
	it frees the allocated memory using `del`
 * and `ft_lstclear`.
 *

	* @param lst (t_linked_list *) : A pointer to the first node of the original linked list.

	* @param f (void *(*f)(void *)) : A pointer to the function to be applied to each node's content.

	* @param del (void (*)(void *)) : A pointer to the function used to delete the content of a node.
 *

	* @return (t_linked_list *) : A pointer to the first node of the new linked list,
	or NULL if the allocation fails.
 */
t_linked_list	*ft_lstmap(t_linked_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_linked_list *new_list;
	t_linked_list *new_obj;
	void *new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_obj = ft_lstnew(new_content);
		if (!new_obj)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}