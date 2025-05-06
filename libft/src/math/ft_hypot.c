/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hypot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:30:17 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the hypotenuse of a right triangle.
 *
 * @param x (double) : The length of one side of the triangle.
 * @param y (double) : The length of the other side of the triangle.
 *
 * @return (double) : The length of the hypotenuse calculated using Pythagore.
 */
double	ft_hypot(double x, double y)
{
	return (ft_sqrt(x * x + y * y));
}
