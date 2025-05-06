/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:41:57 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:21 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Prints an unsigned integer in binary fmt to stdout
 *
 * @param n (unsigned int) : integer to be printed in binary
 *
 * @return (int) : total number of characters printed
 */
int	ft_putbin(unsigned int n)
{
	char	c;
	int		len;

	len = 0;
	if (n >= 2)
		len += ft_putbin(n / 2);
	c = (n % 2) + '0';
	len += ft_putchar(c);
	return (len);
}
