/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gethex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:23:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:02 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns a string of hexadecimal characters based on the fmt.
 *
 * @param fmt (char) : 'X' for uppercase hex, any other value for lowercase.
 *
 * @return (const char *) : The hexadecimal character set.
 */
const char	*ft_gethex(char fmt)
{
	if (fmt == 'X')
		return ("0123456789ABCDEF");
	return ("0123456789abcdef");
}
