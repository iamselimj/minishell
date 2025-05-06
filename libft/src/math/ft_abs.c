/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:20:13 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_abs
 * @brief Computes the absolute value of an integer.
 *
 * This function checks if the integer `x` is negative. If it is, the function
 * returns the negation of `x` (i.e., the absolute value). If `x` is already
 * non-negative, it returns `x` unchanged.
 *
 * @param x (int) : The integer whose absolute value is to be computed.
 *
 * @return (int) : The absolute value of `x`.
 */
int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
