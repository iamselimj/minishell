/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lcm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:22:19 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the least common multiple (LCM) of two integers.
 *
 * @param a (int) : The first integer.
 * @param b (int) : The second integer.
 *
 * @return (int) : The LCM of `a` and `b`, or 0 if either is 0.
 */
int	ft_lcm(int a, int b)
{
	if (a == 0 || b == 0)
		return (0);
	return ((a * b) / ft_gcd(a, b));
}
