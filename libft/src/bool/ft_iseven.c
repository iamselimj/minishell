/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iseven.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:09:24 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdio.h>

/**
 * @function ft_is_even
 * @brief Checks if a number is even.
 *
 * This function returns true if the integer passed as a parameter is even,
 * i.e., divisible by 2 without a remainder. It checks if the number modulo 2
 * is equal to 0.
 *
 * @params n (int) : The integer to check if it is even.
 *
 * @return (int) : Returns 1 if the number is even, otherwise returns 0.
 */
int	ft_is_even(int n)
{
	return (n % 2 == 0);
}
