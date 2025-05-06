/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 07:43:33 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:39 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the integer part of x, removing the fractional part.
 *
 * @param x The number to truncate.
 *
 * @return The truncated integer part of x.
 */
double	ft_trunc(double x)
{
	int	int_part;

	int_part = (int)x;
	return ((double)int_part);
}
