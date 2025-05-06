/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lshift.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:17:05 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_lshift
 * @brief Performs a left bitwise shift on an unsigned integer.
 *

	* This function shifts the bits of the unsigned integer `n` to the left by `shift` positions.
 *
 * @params n (unsigned int) : The number to shift.
 * @params shift (unsigned int) : The number of positions to shift left.
 *
 * @return (unsigned int) : The result of the left shift operation.
 */
unsigned int	ft_lshift(unsigned int n, unsigned int shift)
{
	return (n << shift);
}
