/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the absolute value of an integer.
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
