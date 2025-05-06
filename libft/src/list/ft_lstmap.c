/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:18:52 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:50 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list_node	*ft_lstmap(t_list_node *lst, void *(*f)(void *))
{
	t_list_node	*new_list;
	t_list_node	*new_obj;
	void		*obj;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		obj = f(lst->data);
		new_obj = ft_list_new(obj);
		if (!new_obj)
		{
			ft_memfree(obj);
			ft_list_clear(&new_list, ft_memfree);
			return (NULL);
		}
		ft_list_add_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}
