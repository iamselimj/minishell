/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:21:00 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_factorial
 * @brief Computes the factorial of a non-negative integer `n`.
 *

	* This function calculates the factorial of `n` by multiplying all integers from
 * `n` down to 1. The factorial of 0 is defined as 1. If `n` is greater than 1,
 * the function multiplies `result` by each integer from `n` to 1.
 *
 * @param n (int) : The integer whose factorial is to be computed.
 *
 * @return (long) : The factorial of `n`, or 1 if `n` is 0.
 */
long	ft_factorial(int n)
{
	long	result;

	if (n == 0)
		return (1);
	result = 1;
	while (n > 1)
	{
		result *= n;
		n--;
	}
	return (result);
}
