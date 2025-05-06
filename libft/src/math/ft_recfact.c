/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recfact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Computes the factorial of a given number using recursion.
 *
 * @param nb (int) : The number to compute the factorial of.
 *
 * @return (int) : The factorial of `nb`, or 0 if `nb` is negative.
 */
int	ft_recfact(int nb)
{
	if (nb < 0)
		return (0);
	if (nb >= 1)
		return (nb * ft_recfact(nb - 1));
	else
		return (1);
}
