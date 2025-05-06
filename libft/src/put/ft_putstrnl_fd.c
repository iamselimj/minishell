/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrnl_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:12:33 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:32:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_putstrnl_fd(char *str, int fd)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (count);
	while (str[i])
		count += ft_putchar_fd(str[i++], fd);
	count += ft_putchar_fd('\n', fd);
	return (count);
}
