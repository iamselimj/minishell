/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:02:07 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:28:57 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_sqrt

	* @brief Computes the square root of a given number using the Babylonian method.
 *

	* This function calculates the square root of `n` using an iterative approach known
 * as the Babylonian method (or Heron's method). If `n` is negative,
	the function
 * returns -1. The function iterates until the difference between successive
 * approximations is less than 0.000001, ensuring a high degree of accuracy.
 *
 * @param n (double) : The number to compute the square root of.
 *
 * @return (double) : The square root of `n`, or -1 if `n` is negative.
 */
double	ft_sqrt(double n)
{
	double x;
	double y;

	if (n < 0)
		return (-1);
	x = n;
	y = (x + n / x) / 2;
	while (x - y > 0.000001)
	{
		x = y;
		y = (x + n / x) / 2;
	}
	return (y);
}