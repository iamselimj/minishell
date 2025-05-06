/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:22:27 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_iterative_factorial
 * @brief Computes the factorial of a non-negative integer `nb` iteratively.
 *

	* This function calculates the factorial of `nb` by multiplying all integers from 1 to `nb`.
 * If `nb` is negative, it returns 0,
	as factorials are not defined for negative numbers.

	* The factorial of `nb` is calculated by initializing `result` to 1 and multiplying it by each
 * integer from 1 to `nb`.
 *
 * @param nb (int) : The integer whose factorial is to be computed.
 *
 * @return (int) : The factorial of `nb`, or 0 if `nb` is negative.
 */
int	ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
		result *= i;
	return (result);
}