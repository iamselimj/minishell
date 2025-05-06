/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:10:23 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_is_prime
 * @brief Checks if a number is prime.
 *

	* This function returns true if the integer passed as a parameter is a prime number,
 * i.e.,
	a number greater than 1 that is not divisible by any integer other than 1 and itself.

	* It uses a basic algorithm to check for divisibility up to the square root of the number.
 *
 * @params n (int) : The number to check.
 *
 * @return (int) : Returns 1 if the number is prime, otherwise returns 0.
 */
int	ft_is_prime(int n)
{
	int i;

	if (n <= 1)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}