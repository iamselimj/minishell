/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 09:26:57 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/05 22:12:43 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Applies the ROT13 cipher to a string.
 *
 * @param str (char *) : The input string to be encoded in place.
 *
 * @return (char *) : The same pointer, transformed.
 */
char	*ft_rot13(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (ft_isupper(str[i]))
			str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		else if (ft_islower(str[i]))
			str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
		i++;
	}
	return (str);
}
