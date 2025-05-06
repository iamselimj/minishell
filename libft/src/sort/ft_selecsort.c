/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selecsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:52:48 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_selection_sort
 * @brief Sorts an array using the selection sort algorithm.
 *
 * This function implements the selection sort algorithm,
	which repeatedly selects
 * the minimum element from the unsorted portion of the array and swaps it with

	* the first unsorted element. It continues this process until the array is sorted.
 *
 * @param arr (int *) : A pointer to the array to sort.
 * @param len (int) : The length of the array.
 */
void	ft_selection_sort(int *arr, int len)
{
	int i;
	int j;
	int min_index;
	int temp;

	i = 0;
	while (i < len - 1)
	{
		min_index = i;
		j = i + 1;
		while (j < len)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
			j++;
		}
		if (min_index != i)
		{
			temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}
		i++;
	}
}