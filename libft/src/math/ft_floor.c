/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 07:41:28 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the largest integer less than or equal to x.
 *
 * @param x The number to floor.
 *
 * @return The largest integer less than or equal to x.
 */
int	ft_floor(double x)
{
	int	int_part;

	int_part = (int)x;
	if (x < 0 && x != int_part)
		return (int_part - 1);
	return (int_part);
}
