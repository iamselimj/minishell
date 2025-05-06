/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nanoid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:02:47 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:15:40 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Generates a random nanoID of a specified length.
 *
 * @param len (int) : The length of the generated nanoID.
 *
 * @return (char *) : A pointer to the generated nanoID string,
 *	or NULL if allocation fails or invalid length is provided.
 */
char	*ft_nanoid(int len)
{
	const char		*alnum;
	unsigned int	seed;
	char			*id;
	int				i;

	if (len <= 0)
		return (NULL);
	id = (char *)ft_calloc((len + 1), sizeof(char));
	if (!id)
		return (NULL);
	alnum = ft_getalpha();
	i = 0;
	seed = i;
	while (i < len)
	{
		id[i++] = alnum[seed % 64];
	}
	id[i] = '\0';
	return (id);
}
