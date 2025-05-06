/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:24:34 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_heap_max
 *
 * @brief Extracts the maximum value from the heap.
 *

	* This function extracts the maximum value from the heap and maintains the heap property.
 *

	* @param heap (t_heap *) : The heap from which the maximum value will be extracted.
 *
 * @return (int) : The maximum value extracted from the heap.
 */
int	ft_heap_max(t_heap *heap)
{
	int	root;

	if (heap->size <= 0)
		return (-1);
	if (heap->size == 1)
	{
		heap->size--;
		return (heap->data[0]);
	}
	root = heap->data[0];
	heap->data[0] = heap->data[heap->size - 1];
	heap->size--;
	ft_heapify(heap->data, heap->size, 0);
	return (root);
}
