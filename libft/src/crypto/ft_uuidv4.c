/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uuidv4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:03:26 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:15:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Generates a random UUID version 4.
 *
 * @param fmt (char) X or x [hex alpha]
 *
 * @return (char*) : A randomly generated UUID version 4.
 */
char	*ft_uuidv4(const char fmt)
{
	const char	*hex;
	char		*uuid;
	int			i;

	uuid = (char *)ft_calloc((36 + 1), sizeof(char));
	if (!uuid)
		return (NULL);
	hex = ft_gethex(fmt);
	i = 0;
	while (i < 36)
	{
		if (i == 8 || i == 13 || i == 18 || i == 23)
			uuid[i] = '-';
		else
			uuid[i] = hex[ft_rnum() % 16];
		i++;
	}
	uuid[36] = '\0';
	uuid[14] = '4';
	uuid[19] = (uuid[19] & 0x3f) | 0x80;
	return (uuid);
}
