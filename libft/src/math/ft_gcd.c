/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gcd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:22:02 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_gcd

	* @brief Computes the greatest common divisor (GCD) of two integers `a` and `b`.
 *

	* This function uses the Euclidean algorithm to calculate the GCD of two integers.

	* The algorithm repeatedly replaces the larger number by the remainder of dividing

	* the larger number by the smaller number until one of the numbers becomes zero.
 * The GCD is the last non-zero value.
 *
 * @param a (int) : The first integer.
 * @param b (int) : The second integer.
 *
 * @return (int) : The greatest common divisor of `a` and `b`.
 */
int	ft_gcd(int a, int b)
{
	int	temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}
