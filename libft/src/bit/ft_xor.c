/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xor.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:14:01 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_xor
 * @brief Performs a bitwise XOR operation between two unsigned integers.
 *

	* This function computes the bitwise XOR of two unsigned integers `n1` and `n2`.
 * XOR (exclusive or) is a logical operation that returns 1 if the bits of the
 * operands are different and 0 if they are the same.
 *
 * @params n1 (unsigned int) : The first number for XOR operation.
 * @params n2 (unsigned int) : The second number for XOR operation.
 *

	* @return (unsigned int) : The result of the XOR operation between `n1` and `n2`.
 */
unsigned int	ft_xor(unsigned int n1, unsigned int n2)
{
	return (n1 ^ n2);
}
