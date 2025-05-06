/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:13:56 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_hexor

	* @brief Performs a bitwise XOR operation between two unsigned integers and outputs the result in hexadecimal format.
 *

	* This function computes the bitwise XOR between two unsigned integers `n1` and `n2`,

	* then converts the result to hexadecimal format and outputs it using `ft_puthex`.
 *
 * @params n1 (unsigned int) : The first number for XOR.
 * @params n2 (unsigned int) : The second number for XOR.

	* @params format (char) : Specifies the format for the hexadecimal output (e.g.,
 * uppercase or lowercase).
 *
 * @return (int) : The number of characters printed by `ft_puthex`.
 */
int	ft_hexor(unsigned int n1, unsigned int n2, char format)
{
	unsigned int result;

	// Perform XOR operation
	result = ft_xor(n1, n2);

	// Output the result in hexadecimal format using ft_puthex
	return (ft_puthex(result, format));
}