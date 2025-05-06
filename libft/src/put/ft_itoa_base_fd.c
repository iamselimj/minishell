/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:32:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static void	ft_convert_to_base(long num, int base, char *str, int *i)
{
	static char	digits[] = "0123456789ABCDEF";

	if (num > 9)
	{
		ft_convert_to_base(num / base, base, str, i);
	}
	str[*i] = digits[num % base];
	(*i)--;
}

int	ft_itoa_base_fd(int n, int base, int fd)
{
	char	*str;
	int		len;
	long	num;
	int		i;
	int		str_len;

	num = (long)n;
	len = ft_numlen(n, base);
	if (!(str = (char *)ft_calloc(1, len + 1)))
		return (-1);
	str[len] = '\0';
	if (num < 0 && base == 10)
	{
		str[0] = '-';
		num = -num;
		i = len - 1;
		ft_convert_to_base(num, base, str, &i);
	}
	else
	{
		i = len - 1;
		ft_convert_to_base(num, base, str, &i);
	}
	str_len = ft_strlen(str);
	return (ft_putstr_fd(str, fd), free(str), str_len);
}
