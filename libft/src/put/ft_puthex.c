/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:32:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_puthex(unsigned int n, char format)
{
	char	hex[] = "0123456789abcdef";
	char	HEX[] = "0123456789ABCDEF";
	int		len;

	len = 0;
	if (n == 0)
		return (ft_putchar('0'));
	if (format == 'X')
		while (n > 0)
		{
			ft_putchar(HEX[n % 16]);
			n /= 16;
			len++;
		}
	else if (format == 'x')
		while (n > 0)
		{
			ft_putchar(hex[n % 16]);
			n /= 16;
			len++;
		}
	return (len);
}
