/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:21:41 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_find_next_prime

	* @brief Finds the next prime number greater than or equal to the given number `nb`.
 *

	* This function iteratively checks if `nb` is a prime number. If it is not prime,

	* it increments `nb` by 1 and checks again until it finds the next prime number.
 * If `nb` is already prime, it returns `nb`.
 *
 * @param nb (int) : The number from which the next prime number is to be found.
 *
 * @return (int) : The next prime number greater than or equal to `nb`.
 */
int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}