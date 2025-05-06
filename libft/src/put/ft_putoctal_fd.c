/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:12:33 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:32:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_putoctal_fd(unsigned int n, int fd)
{
	char c;

	if (n >= 8)
		ft_putoctal_fd(n / 8, fd);
	c = (n % 8) + '0';
	write(fd, &c, 1);
	return (0);
}