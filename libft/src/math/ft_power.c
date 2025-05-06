/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:25:47 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_power
 * @brief Computes the power of a base raised to an exponent.
 *
 * This function calculates `base` raised to the power of `exp` by iteratively

	* multiplying `base` by itself `exp` times. The result is returned as an unsigned
 * long integer. If `exp` is 0,
	the function returns 1 (as any non-zero base raised
 * to the power of 0 is 1).
 *
 * @param base (unsigned long) : The base value.
 * @param exp (unsigned int) : The exponent.
 *
 * @return (unsigned long) : The result of `base` raised to the power of `exp`.
 */
unsigned long	ft_power(unsigned long base, unsigned int exp)
{
	unsigned long	result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}
