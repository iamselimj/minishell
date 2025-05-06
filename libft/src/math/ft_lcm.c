/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lcm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:23:01 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_lcm
 * @brief Computes the least common multiple (LCM) of two integers `a` and `b`.
 *
 * This function calculates the LCM of `a` and `b` using the formula:
 *
 * \[
 * LCM(a, b) = \frac{|a \times b|}{GCD(a, b)}
 * \]

	* where GCD is the greatest common divisor of `a` and `b`. If either `a` or `b` is 0,
 * the function returns 0, as the LCM of 0 with any number is undefined.
 *
 * @param a (int) : The first integer.
 * @param b (int) : The second integer.
 *
 * @return (int) : The least common multiple of `a` and `b`,
	or 0 if either `a` or `b` is 0.
 */
int	ft_lcm(int a, int b)
{
	if (a == 0 || b == 0)
		return (0);
	return ((a * b) / ft_gcd(a, b));
}
