/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mask.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:24:59 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_mask
 * @brief Creates a mask with the least significant n bits set to 1.
 *
 * This function generates an unsigned integer where the least significant `n`
 * bits are set to 1, and the remaining bits are set to 0. It uses bit shifting
 * to achieve this. If `n` exceeds the number of bits in the integer type (e.g.,
	32 for a 32-bit unsigned int),
 * the result will have all bits set to 1.
 *
 * @params n (unsigned int) : The number of bits to set to 1 in the mask.
 *
 * @return (unsigned int) : The generated bitmask.
 */
unsigned int	ft_mask(unsigned int n)
{
	if (n >= 32)
		// Handle cases where n exceeds the number of bits in a 32-bit integer
		return (0xFFFFFFFF); // All bits set to 1

	return ((1U << n) - 1);
	// Create a mask with the least significant n bits set to 1
}