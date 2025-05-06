/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:20:43 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_exp
 * @brief Computes the value of `x` raised to the power of `n` (x^n).
 *

	* This function calculates `x` raised to the power `n` by multiplying `x` by itself
 * `n` times. If `n` is negative,
	it computes the reciprocal of `x` raised to the
 * positive value of `n`. If `n` is 0, the function returns 1,
	as any number raised
 * to the power of 0 is 1.
 *
 * @param x (double) : The base value.
 * @param n (int) : The exponent value.
 *
 * @return (double) : The result of `x` raised to the power of `n` (x^n).
 */
double	ft_exp(double x, int n)
{
	double	result;
	int		i;

	result = 1;
	if (n == 0)
		return (1);
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			result *= x;
			i++;
		}
	}
	else
	{
		while (i < -n)
		{
			result *= x;
			i++;
		}
		result = 1 / result;
	}
	return (result);
}
