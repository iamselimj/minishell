/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultrange.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:29:08 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_ultrange
 * @brief Creates an array of integers from `min` to `max
	- 1` and assigns it to a pointer.
 *

	* This function allocates memory for an array of integers and fills it with values
 * starting from `min` up to, but not including,
	`max`. If `min` is greater than or
 * equal to `max`,
	the function sets the pointer to NULL and returns 0. The array is

	* terminated with a null character. The function returns the number of elements in the array.
 *

	* @param range (int **) : A pointer to a pointer where the allocated array will be stored.
 * @param min (int) : The starting value of the range.
 * @param max (int) : The ending value of the range (exclusive).
 *
 * @return (int) : The number of elements in the array,
	or 0 if `min` is greater than or equal to `max`.
 */
int	ft_ultrange(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	tab = NULL;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min + 1));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = '\0';
	*range = tab;
	return (i);
}