/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clrbit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:17:21 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_clrbit
 * @brief Clears a specific bit (sets it to 0) in an unsigned integer.
 *

	* This function clears the bit at position `pos` in the integer `n` (sets it to 0).
 *
 * @params n (unsigned int) : The number to modify.
 * @params pos (unsigned int) : The position of the bit to clear.
 *
 * @return (unsigned int) : The modified number with the bit cleared.
 */
unsigned int	ft_clrbit(unsigned int n, unsigned int pos)
{
	return (n & ~(1 << pos));
}