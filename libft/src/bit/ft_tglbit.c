/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tglbit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:17:25 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_tglbit
 * @brief Toggles a specific bit (flips it) in an unsigned integer.
 *

	* This function toggles the bit at position `pos` in the integer `n` (flips it between 0 and 1).
 *
 * @params n (unsigned int) : The number to modify.
 * @params pos (unsigned int) : The position of the bit to toggle.
 *
 * @return (unsigned int) : The modified number with the bit toggled.
 */
unsigned int	ft_tglbit(unsigned int n, unsigned int pos)
{
	return (n ^ (1 << pos));
}