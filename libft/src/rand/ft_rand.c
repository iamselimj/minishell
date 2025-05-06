/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:48:49 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_rand
 * @brief Generates a pseudo-random integer.
 *
 * This function generates a pseudo-random integer using a linear congruential
 * generator (LCG) algorithm. The static `seed` variable ensures that the
 * sequence of random numbers is consistent and repeats the same sequence each

	* time the program runs. The generated value is scaled to be between 0 and 32767.
 *
 * @return (int) : A pseudo-random integer between 0 and 32767.
 */
int	ft_rand(void)
{
	static unsigned long seed;

	seed = 1;
	seed *= 1103515245 + 12345;
	return ((seed / 65536) % 32768);
}