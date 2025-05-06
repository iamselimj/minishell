/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:28:45 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_recursive_power
 * @brief Computes the power of a number using recursion.
 *
 * This function calculates `nb` raised to the power of `power` by recursively
 * multiplying `nb` by the result of `nb` raised to the power of `power - 1`.
 * If `power` is 0,
	the function returns 1 (as any number raised to the power of 0 is 1).
 * If `power` is negative, the function returns 0. If `power` is 1,
	the function returns `nb`.
 *
 * @param nb (int) : The base number.
 * @param power (int) : The exponent.
 *
 * @return (int) : The result of `nb` raised to the power of `power`,
	or 0 if `power` is negative.
 */
int	ft_recursive_power(int nb, int power)
{
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}