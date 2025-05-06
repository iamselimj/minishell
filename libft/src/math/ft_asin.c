/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:30:17 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the arc sine (inverse sine) of a value.
 *
 * @param x (double) : The value for which the arc sine is calculated.
 *                     Must be in the range [-1, 1].
 *
 * @return (double) : The arc sine of the input value in radians.
 *                    Returns -1 if the input is out of range.
 */
double	ft_asin(double x)
{
	if (x < -1 || x > 1)
		return (-1);
	return (ft_atan2(x, ft_sqrt(1 - x * x)));
}
