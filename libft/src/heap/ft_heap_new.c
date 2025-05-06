/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heap_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:18:08 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_heap_new
 *
 * @brief Creates a new heap.
 *
 * This function creates a new heap with the given capacity.
 *
 * @param capacity (int) : The capacity of the heap.
 *
 * @return (t_heap *) : A pointer to the newly created heap.
 */
t_heap	*ft_heap_new(int capacity)
{
	t_heap *heap;

	heap = (t_heap *)malloc(sizeof(t_heap));
	if (!heap)
		return (NULL);
	heap->data = (int *)malloc(capacity * sizeof(int));
	if (!heap->data)
	{
		free(heap);
		return (NULL);
	}
	heap->size = 0;
	heap->capacity = capacity;
	return (heap);
}