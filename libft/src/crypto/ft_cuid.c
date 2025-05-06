/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cuid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:15:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Generates a unique identifier (CUID) in a specified fmt.
 *
 * @param fmt (char) : The fmt to use for hexadecimal
 *	characters ('X' for uppercase, 'x' for lowercase).
 *
 * @return (char *) : A pointer to the generated CUID string,
 *	or NULL if memory allocation fails.
 */
char	*ft_cuid(const char fmt)
{
	char	*cuid;
	char	*hex;
	int		val;
	int		i;

	cuid = (char *)malloc(16 + 1);
	if (!cuid)
		return (NULL);
	hex = ft_gethex(fmt);
	i = 0;
	while (i < 16)
	{
		if (i == 6 || i == 9 || i == 12 || i == 15)
			cuid[i] = '-';
		else
		{
			val = ft_rnum() % 16;
			cuid[i] = hex[val];
		}
		i++;
	}
	cuid[16] = '\0';
	return (cuid);
}
