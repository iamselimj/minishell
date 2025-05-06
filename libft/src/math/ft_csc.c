/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_csc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 07:36:00 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:39 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Calculates the cosecant of the angle.
 *
 * @param x The angle in radians.
 *
 * @return The cosecant of the angle.
 */
double	ft_csc(double x)
{
	if (ft_sin(x) == 0)
		return (0);
	return (1 / ft_sin(x));
}
