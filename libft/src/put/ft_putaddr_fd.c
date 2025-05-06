/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:23:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:36:38 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_putaddr_fd(void *ptr, char format, int fd)
{
	unsigned long address;

	address = (unsigned long)ptr;
	write(fd, "0x", 2);
	if (address == 0)
		write(fd, "0", 1);
	else
		ft_puthex_fd(address, format, fd);
	return (0);
}