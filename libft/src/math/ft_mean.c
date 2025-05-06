/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mean.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:24:57 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_mean
 * @brief Computes the arithmetic mean of an array of integers.
 *

	* This function calculates the average of the elements in the array `arr` of size `n`.

	* The mean is computed by summing all elements and dividing by the number of elements.
 * If the array is empty (`n == 0`), the function returns 0.0.
 *
 * @param arr (int*) : Pointer to the array of integers.
 * @param n (int) : The number of elements in the array.
 *
 * @return (double) : The arithmetic mean of the array elements,
 * or 0.0 if `n` is 0.
 */
double	ft_mean(int *arr, int n)
{
	int sum = 0;
	int i = 0;

	if (n == 0)
		return (0.0);
	while (i < n)
		sum += arr[i++];
	return ((double)sum / n);
}