/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isbit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:17:13 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_isbit
 * @brief Checks if a specific bit is set (1) in an unsigned integer.
 *

	* This function checks whether the bit at position `pos` in the integer `n` is set to 1.
 *
 * @params n (unsigned int) : The number to check.
 * @params pos (unsigned int) : The position of the bit to check.
 *
 * @return (int) : Returns 1 if the bit is set, otherwise returns 0.
 */
int	ft_isbit(unsigned int n, unsigned int pos)
{
	return ((n & (1 << pos)) != 0);
}