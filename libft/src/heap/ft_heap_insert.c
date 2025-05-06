/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heap_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:18:38 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_heap_insert
 *
 * @brief Inserts a value into the heap.
 *
 * This function inserts a value into the heap and maintains the heap property.
 *
 * @param heap (t_heap *) : The heap into which the value will be inserted.
 * @param value (int) : The value to be inserted.
 */
void	ft_heap_insert(t_heap *heap, int value)
{
	int i;
	int temp;

	if (heap->size == heap->capacity)
		return ;
	heap->size++;
	i = heap->size - 1;
	heap->data[i] = value;
	while (i != 0 && heap->data[ft_heap_parent(i)] < heap->data[i])
	{
		temp = heap->data[i];
		heap->data[i] = heap->data[ft_heap_parent(i)];
		heap->data[ft_heap_parent(i)] = temp;
		i = ft_heap_parent(i);
	}
}