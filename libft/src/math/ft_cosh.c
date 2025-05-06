/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cosh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:30:17 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Computes the hyperbolic cosine of a value.
 *
 * @param x (double) : The value for which to compute the hyperbolic cosine.
 *
 * @return (double) : The hyperbolic cosine of the input value x.
 */
double	ft_cosh(double x)
{
	return ((ft_exp(x, 20) + ft_exp(-x, 20)) / 2);
}
