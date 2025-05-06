/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:14:28 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:33:56 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_lstsize
 *
 * @brief Calculates the number of nodes in a linked list.
 *

	* This function iterates through the linked list pointed to by `lst` and counts the number of nodes.

	* It uses a temporary pointer `tmp` to traverse the list and a counter `i` to keep track of the number
 * of nodes. The function returns the total count of nodes in the list.
 *

	* @param lst (t_linked_list *) : A pointer to the first node of the linked list.
 *
 * @return (int) : The number of nodes in the linked list.
 */
int	ft_lstsize(t_linked_list *lst)
{
	t_linked_list *tmp;
	int i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}