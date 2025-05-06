/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:55:05 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_quick_sort
 * @brief Sorts an array using the quicksort algorithm.
 *
 * This function implements the quicksort algorithm, which selects a pivot
 * element and partitions the array around it,
	recursively sorting the subarrays.
 *
 * @param arr (int *) : A pointer to the array to sort.
 * @param low (int) : The starting index of the array to sort.
 * @param high (int) : The ending index of the array to sort.
 */
void	ft_quicksort(int *arr, int low, int high)
{
	int pivot;

	while (low < high)
	{
		pivot = ft_partition(arr, low, high);
		ft_quick_sort(arr, low, pivot - 1);
		low = pivot + 1;
	}
}