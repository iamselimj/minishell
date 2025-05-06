/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbin_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:02:07 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/29 06:41:55 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Affiche un entier non signé en binaire sur un fd
 *
 * @param n (unsigned int) : entier à afficher
 * @param fd (int) : descripteur de fichier
 *
 * @return (int) : nombre de caractères écrits
 */
int	ft_putbin_fd(unsigned int n, int fd)
{
	char	c;
	int		len;

	len = 0;
	if (n >= 2)
		len += ft_putbin_fd(n / 2, fd);
	c = (n % 2) + '0';
	len += ft_putchar_fd(c, fd);
	return (len);
}
