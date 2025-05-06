/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:28:32 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_recursive_factorial
 * @brief Computes the factorial of a given number using recursion.
 *

	* This function calculates the factorial of `nb` by recursively multiplying `nb`
 * by the factorial of `nb - 1`. If `nb` is less than 0, the function returns 0.
 * If `nb` is 0, the function returns 1, as 0! is defined as 1.
 *
 * @param nb (int) : The number to compute the factorial of.
 *
 * @return (int) : The factorial of `nb`, or 0 if `nb` is negative.
 */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
