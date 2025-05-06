/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:55:23 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_bubblesort
 * @brief Sorts an array using the bubble sort algorithm.
 *
 * This function implements the bubble sort algorithm, which repeatedly
 * compares adjacent elements and swaps them if they are in the wrong order.
 * It continues doing this until no swaps are needed,
	indicating that the array is sorted.
 *
 * @param arr (int *) : A pointer to the array to sort.
 * @param len (int) : The length of the array.
 */
void	ft_bubblesort(int *arr, int len)
{
	int i;
	int j;
	int temp;
	int swapped;

	i = 0;
	while (i < len - 1)
	{
		swapped = 0;
		j = 0;
		while (j < len - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = 1;
			}
			j++;
		}
		if (!swapped)
			break ;
		i++;
	}
}