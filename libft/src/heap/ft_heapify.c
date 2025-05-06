/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heapify.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:24:28 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_heapify
 *
 * @brief Maintains the heap property for either a heap structure or array.
 *

	* This function ensures that the heap property is maintained starting from the given index.
 *
 * @param data (int *) : A pointer to the heap's data (array) to be heapified.
 * @param size (int) : The size of the data (heap size or array length).
 * @param i (int) : The index from which to start heapifying.
 */
static void	ft_heapify(int *data, int size, int i)
{
	int left;
	int right;
	int largest;
	int temp;

	while (i < size / 2)
	{
		left = 2 * i + 1;
		right = 2 * i + 2;
		largest = i;
		if (left < size && data[left] > data[largest])
			largest = left;
		if (right < size && data[right] > data[largest])
			largest = right;
		if (largest == i)
			break ;
		temp = data[i];
		data[i] = data[largest];
		data[largest] = temp;
		i = largest;
	}
}