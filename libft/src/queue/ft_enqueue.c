/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enqueue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:06:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_enqueue
 *
 * @brief Adds an item to the queue.
 *
 * This function adds an item to the rear of the queue.
 *
 * @param queue (t_queue *) : The queue to which the item will be added.
 * @param value (int) : The value to be added to the queue.
 */
void	ft_enqueue(t_queue *queue, int value)
{
	if (queue->rear == queue->size - 1)
		return ;
	if (queue->front == -1)
		queue->front = 0;
	queue->rear++;
	queue->items[queue->rear] = value;
}