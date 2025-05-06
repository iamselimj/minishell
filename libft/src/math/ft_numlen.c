/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:25:24 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_numlen
 * @brief Computes the number of digits in an integer `n` for a given `base`.
 *

	* This function calculates the number of digits required to represent the integer `n`
 * in the specified `base`. For non-positive numbers (`n <= 0`),
	an extra digit is
 * counted to account for the sign (e.g.,
	the negative sign for negative numbers or

	* the single digit for zero). The function iteratively divides `n` by `base` until
 * `n` becomes 0, incrementing the length for each division.
 *
 * @param n (int) : The integer to measure.
 * @param base (int) : The base for the representation (e.g., 10 for decimal,
	16 for hexadecimal).
 *

	* @return (int) : The number of digits required to represent `n` in the given `base`.
 */
int	ft_numlen(int n, int base)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= base;
		len++;
	}
	return (len);
}
