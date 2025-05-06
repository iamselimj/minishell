/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:42:18 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the larger of two values.
 *
 * @param a (int) : The first value to compare.
 * @param b (int) : The second value to compare.
 *
 * @return (int) : The larger of the two values.
 */
int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
