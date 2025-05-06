/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:32:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_itoa_base(int n, int base)
{
	static char	digits[] = "0123456789ABCDEF";
	char		*str;
	int			len;
	long		num;
	int			i;

	num = (long)n;
	len = ft_numlen(n, base);
	str = (char *)ft_calloc(1, len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0 && base == 10)
	{
		str[0] = '-';
		num = -num;
	}
	i = len - 1;
	while (num > 9)
	{
		str[i--] = digits[num % base];
		num /= base;
	}
	str[i] = digits[num];
	return (str);
}
