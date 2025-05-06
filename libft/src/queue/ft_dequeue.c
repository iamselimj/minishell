/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dequeue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:06:17 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_dequeue
 *
 * @brief Removes an item from the queue.
 *
 * This function removes an item from the front of the queue.
 *
 * @param queue (t_queue *) : The queue from which the item will be removed.
 *
 * @return (int) : The value removed from the queue.
 */
int	ft_dequeue(t_queue *queue)
{
	int item;
	if (queue->front == -1)
		return (-1);
	item = queue->items[queue->front];
	queue->front++;
	if (queue->front > queue->rear)
	{
		queue->front = queue->rear = -1;
	}
	return (item);
}