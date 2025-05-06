/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacquet <sjacquet@student.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:09:35 by sjacquet          #+#    #+#             */
/*   Updated: 2024/11/04 14:09:35 by sjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	num;
	int		i;

	num = (long)n;
	len = ft_numlen(n, 10);
	str = (char *)ft_calloc(1, len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	i = len - 1;
	while (num > 9)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	str[i] = num + '0';
	return (str);
}
