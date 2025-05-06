/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:32:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static int	ft_puthex_lower(unsigned int n, char *hex, int fd)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		ft_putchar_fd(hex[n % 16], fd);
		n /= 16;
		len++;
	}
	return (len);
}

static int	ft_puthex_upper(unsigned int n, char *HEX, int fd)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		ft_putchar_fd(HEX[n % 16], fd);
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_puthex_fd(unsigned int n, char format, int fd)
{
	char	*hex_low;
	char	*hex_up;
	int		len;

	hex_low = "0123456789abcdef";
	hex_up = "0123456789ABCDEF";
	len = 0;
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	if (format == 'X')
		len = ft_puthex_upper(n, hex_up, fd);
	else
		len = ft_puthex_lower(n, hex_low, fd);
	return (len);
}
