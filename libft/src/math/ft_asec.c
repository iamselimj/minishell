/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 07:38:01 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the inverse secant (arcsecant) of a value.
 *
 * @param x The value for which we want to calculate the inverse secant.
 *
 * @return The inverse secant in radians.
 */
double	ft_asec(double x)
{
	if (x < 1 && x > -1)
		return (0);
	return (ft_acos(1 / x));
}
