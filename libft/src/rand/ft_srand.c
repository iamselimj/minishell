/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:49:01 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_srand
 * @brief Initializes the random number generator with a seed.
 *
 * This function initializes the pseudo-random number generator's state by
 * modifying the provided seed. The seed is updated by multiplying it with a
 * fixed constant to produce a new value, which influences the subsequent random
 * numbers generated.
 *
 * @param seed (unsigned long *) : A pointer to the seed value to initialize.
 *
 * @return (int) : The updated seed value.
 */
int	ft_srand(unsigned long *seed)
{
	*seed *= 1103515245 + 12345;
	return (*seed);
}