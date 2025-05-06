/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonnaci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:12:33 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:21:20 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_fibonacci
 * @brief Computes the nth Fibonacci number.
 *

	* This function calculates the Fibonacci sequence iteratively. The first two Fibonacci
 * numbers are 0 and 1,
	and each subsequent number is the sum of the two preceding ones.
 * The function returns the Fibonacci number at index `n`.
 *

	* @param n (int) : The index in the Fibonacci sequence for which the number is to be computed.
 *
 * @return (long) : The Fibonacci number at index `n`.
 */
long	ft_fibonacci(int n)
{
	long	a;
	long	b;
	long	temp;
	int		i;

	if (n <= 1)
		return (n);
	a = 0;
	b = 1;
	i = 2;
	while (i <= n)
	{
		temp = a + b;
		a = b;
		b = temp;
		i++;
	}
	return (b);
}
