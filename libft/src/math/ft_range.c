/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:28:21 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_range
 * @brief Creates an array of integers from `min` to `max - 1`.
 *

	* This function allocates memory for an array of integers and fills it with values
 * starting from `min` up to, but not including,
	`max`. If `min` is greater than or
 * equal to `max`,
	the function returns NULL. The array is terminated with a null
 * character.
 *
 * @param min (int) : The starting value of the range.
 * @param max (int) : The ending value of the range (exclusive).
 *
 * @return (int *) : A pointer to the allocated array of integers,
	or NULL if `min`
 * is greater than or equal to `max`.
 */
int	*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(int) * (max - min + 1));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	range[i] = '\0';
	return (range);
}