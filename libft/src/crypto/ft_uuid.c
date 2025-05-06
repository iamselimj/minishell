/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uuid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:15:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Generates a random UUID string (version-agnostic fmt).
 *
 * @param fmt (const char) : fmt specifier for hexadecimal case ('x' or 'X').
 *
 * @return (char *) : A newly allocated UUID string in 8-4-4-4-12 fmt.
 */
char	*ft_uuid(const char fmt)
{
	const char	*hex;
	char		*uuid;
	int			val;
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
		{
			val = ft_rand_number() % 16;
			uuid[i] = hex[val];
		}
		i++;
	}
	uuid[36] = '\0';
	return (uuid);
}
