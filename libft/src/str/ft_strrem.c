/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:07:10 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strrem
 * @brief Removes all occurrences of a character from a string.
 *

	* This function removes all occurrences of the character `c` from the string `str`.

	* It iterates over the string and copies the characters that are not equal to `c` into the same string.

	* The result is a modified string with all instances of `c` removed. The function returns the modified string.
 *

	* @param str (char *) : The string from which the character `c` will be removed.
 * @param c (char) : The character to remove from the string.
 *

	* @return (char *) : A pointer to the modified string with all occurrences of `c` removed.
 */
char	*ft_strrem(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
