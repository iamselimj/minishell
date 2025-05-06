/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:39:30 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:32:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static int	ft_isbased(char c, const char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}

static int	ft_getvalue(char c, const char *base)
{
	int	i;

	i = 0;
	while (base[i])
		if (c == base[i])
			return (i);
		else
			i++;
	return (-1);
}

static int	ft_process_fd(int fd, const char *base, int *sign)
{
	char	buffer[2];
	int		read_bytes;

	read_bytes = read(fd, buffer, 1);
	if (read_bytes <= 0)
		return (0);
	if (ft_isspace(buffer[0]))
		return (ft_process_fd(fd, base, sign));
	if (buffer[0] == '-' || buffer[0] == '+')
	{
		if (buffer[0] == '-')
			*sign = -1;
		else
			*sign = 1;
		return (ft_process_fd(fd, base, sign));
	}
	return (buffer[0]);
}

int	ft_atoi_base_fd(int fd, const char *base)
{
	int		sign;
	char	buffer[2];
	int		base_len;
	int		value;
	int		result;

	sign = 1;
	value = 0;
	result = 0;
	base_len = ft_strlen(base);
	if (!base || base_len < 2)
		return (0);
	buffer[0] = ft_process_fd(fd, base, &sign);
	if (!ft_isbased(buffer[0], base))
		return (0);
	while (ft_isbased(buffer[0], base))
	{
		value = ft_getvalue(buffer[0], base);
		result = result * base_len + value;
		read(fd, buffer, 1);
	}
	return (result * sign);
}
