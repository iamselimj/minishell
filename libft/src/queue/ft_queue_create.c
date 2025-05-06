/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:06:08 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_queue_create
 *
 * @brief Creates a new queue.
 *
 * This function creates a new queue with the given size.
 *
 * @param size (int) : The size of the queue.
 *
 * @return (t_queue *) : A pointer to the newly created queue.
 */
t_queue	*ft_queue_create(int size)
{
	t_queue	*queue;

	queue = (t_queue *)malloc(sizeof(t_queue));
	queue->items = (int *)malloc(size * sizeof(int));
	queue->front = -1;
	queue->rear = -1;
	queue->size = size;
	return (queue);
}
