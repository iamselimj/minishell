/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atan.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:30:17 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the inverse tangent (arctangent) of a value.
 *
 * @param x (double) : The value for which the arctangent is calculated.
 *
 * @return (double) : The arctangent of the input value in radians.
 *  The result is an approximation computed using a series expansion.
 */
double	ft_atan(double x)
{
	double	result;
	double	term;
	int		n;

	result = x;
	term = x;
	n = 1;
	while (ft_abs(term) > 0.000001)
	{
		term *= -x * x / (2 * n + 1);
		result += term;
		n++;
	}
	return (result);
}
