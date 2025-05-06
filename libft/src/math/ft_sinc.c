/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sinc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 07:36:21 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the sinc function.
 *
 * @param x The angle in radians.
 *
 * @return The sinc of the angle.
 */
double	ft_sinc(double x)
{
	if (x == 0)
		return (1);
	return (ft_sin(x) / x);
}
