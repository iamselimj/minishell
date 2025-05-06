/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertsort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:53:13 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_insertion_sort
 * @brief Sorts an array using the insertion sort algorithm.
 *
 * This function implements the insertion sort algorithm,
	which builds the sorted
 * array one element at a time. It repeatedly picks the next element and inserts
 * it into its correct position within the sorted portion of the array.
 *
 * @param arr (int *) : A pointer to the array to sort.
 * @param len (int) : The length of the array.
 */
void	ft_insertion_sort(int *arr, int len)
{
	int i;
	int j;
	int key;

	i = 1;
	while (i < len)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
		i++;
	}
}