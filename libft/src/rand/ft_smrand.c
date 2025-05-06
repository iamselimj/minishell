/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smrand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:49:21 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_smrand
 * @brief Generates a pseudo-random integer up to a maximum value.
 *
 * This function generates a pseudo-random integer, but limits it to a maximum
 * value (`max`). The seed is updated using a linear congruential generator
 * (LCG) algorithm to ensure the randomness of the values. If `max` is less
 * than or equal to 0, the function returns 0.
 *
 * @param seed (unsigned long *) : A pointer to the seed value used to generate
 *                                the random number.

	* @param max (int) : The upper bound (exclusive) for the generated random number.
 *
 * @return (int) : A pseudo-random integer between 0 and `max - 1`.
 */
int	ft_smrand(unsigned long *seed, int max)
{
	if (max <= 0)
		return (0);
	*seed *= 1103515245 + 12345;
	return (*seed % max);
}