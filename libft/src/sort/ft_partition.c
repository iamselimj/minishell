/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_partition.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:53:58 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_partition
 * @brief Partitions the array for quicksort.
 *
 * This function partitions the array by selecting a pivot element and
 * rearranging the elements so that all elements smaller than the pivot
 * are on the left, and all elements greater than the pivot are on the right.
 *
 * @param arr (int *) : A pointer to the array to partition.
 * @param low (int) : The starting index of the array to partition.
 * @param high (int) : The ending index of the array to partition.
 *
 * @return (int) : The index of the pivot element after partitioning.
 */
int	ft_partition(int *arr, int low, int high)
{
	int pivot;
	int i;
	int j;
	int temp;

	pivot = arr[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (arr[j] < pivot)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		j++;
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;
	return (i + 1);
}