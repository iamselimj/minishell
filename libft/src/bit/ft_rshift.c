/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rshift.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:17:08 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_rshift
 * @brief Performs a right bitwise shift on an unsigned integer.
 *

	* This function shifts the bits of the unsigned integer `n` to the right by `shift` positions.
 *
 * @params n (unsigned int) : The number to shift.
 * @params shift (unsigned int) : The number of positions to shift right.
 *
 * @return (unsigned int) : The result of the right shift operation.
 */
unsigned int	ft_rshift(unsigned int n, unsigned int shift)
{
	return (n >> shift);
}
