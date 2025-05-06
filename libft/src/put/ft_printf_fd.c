/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:32:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static int	handle_specifier_fd(char specifier, va_list args, int fd)
{
	if (specifier == 's')
		return (ft_putstr_fd(va_arg(args, char *), fd));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr_fd(va_arg(args, int), fd));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_puthex_fd(va_arg(args, unsigned int), specifier, fd));
	else if (specifier == '%')
		return (ft_putchar_fd('%', fd));
	else
		return (0);
}

int	ft_printf_fd(int fd, const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			len += handle_specifier_fd(format[i], args, fd);
		}
		else
			len += ft_putchar_fd(format[i], fd);
		i++;
	}
	va_end(args);
	return (len);
}
