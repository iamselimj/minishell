/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibon.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:12:33 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the nth Fibonacci number.
 *
 * @param n (int) : The index in the Fibonacci sequence for which
 * the number is to be computed.
 *
 * @return (long) : The Fibonacci number at index `n`.
 */
long	ft_fibon(int n)
{
	long	a;
	long	b;
	long	temp;
	int		i;

	if (n <= 1)
		return (n);
	a = 0;
	b = 1;
	i = 2;
	while (i <= n)
	{
		temp = a + b;
		a = b;
		b = temp;
		i++;
	}
	return (b);
}
