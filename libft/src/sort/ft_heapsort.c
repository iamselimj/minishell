/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heapsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:56:26 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_heapsort
 * @brief Sorts an array using the heapsort algorithm.
 *
 * This function implements the heapsort algorithm,
	which first builds a max heap
 * from the array and then repeatedly extracts the maximum element from the heap
 * and places it at the end of the array, maintaining the heap property.
 *
 * @param arr (int *) : A pointer to the array to sort.
 * @param len (int) : The length of the array.
 */
void	ft_heapsort(int *arr, int len)
{
	int	i;
	int	temp;

	i = len / 2 - 1;
	while (i >= 0)
	{
		ft_heapify(arr, len, i);
		i--;
	}
	i = len - 1;
	while (i > 0)
	{
		temp = arr[0];
		arr[0] = arr[i];
		arr[i] = temp;
		ft_heapify(arr, i, 0);
		i--;
	}
}
