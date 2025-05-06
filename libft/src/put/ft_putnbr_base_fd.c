/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:32:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_putnbr_base_fd(int n, int base, int fd)
{
	char	*digits;
	int		count;

	digits = "0123456789ABCDEF";
	count = 0;
	if (n < 0 && base == 10)
	{
		count += ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= base)
		count += ft_putnbr_base_fd(n / base, base, fd);
	count += ft_putchar_fd(digits[n % base], fd);
	return (count);
}
