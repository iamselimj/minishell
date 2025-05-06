/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:22:45 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_iterative_power
 * @brief Computes the value of `nb` raised to the power of `power` iteratively.
 *

	* This function calculates `nb` raised to the power `power` by multiplying `nb` by itself
 * `power` times. If `power` is negative, the function returns 0,
	as negative exponents
 * are not supported by this function. If `nb` is 0 and `power` is 0,
	it returns 1 by definition.
 *
 * @param nb (int) : The base value.
 * @param power (int) : The exponent value.
 *
 * @return (int) : The result of `nb` raised to the power of `power`.
 */
int	ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	result = 1;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power >= i)
	{
		result = result * nb;
		i++;
	}
	return (result);
}