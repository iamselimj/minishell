/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setbit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:17:17 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_setbit
 * @brief Sets a specific bit to 1 in an unsigned integer.
 *
 * This function sets the bit at position `pos` in the integer `n` to 1.
 *
 * @params n (unsigned int) : The number to modify.
 * @params pos (unsigned int) : The position of the bit to set.
 *
 * @return (unsigned int) : The modified number with the bit set.
 */
unsigned int	ft_setbit(unsigned int n, unsigned int pos)
{
	return (n | (1 << pos));
}