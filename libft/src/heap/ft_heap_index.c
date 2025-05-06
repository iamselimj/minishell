/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heap_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:18:24 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_heap_parent
 *
 * @brief Gets the parent index of a node in the heap.
 *
 * This function calculates the parent index of the given node index.
 *
 * @param index (int) : The index of the node.
 *
 * @return (int) : The parent index of the node.
 */
int	ft_heap_parent(int index)
{
	return ((index - 1) / 2);
}