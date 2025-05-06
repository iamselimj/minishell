/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:01:06 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strcapitalize
 * @brief Capitalizes the first letter of each word in a string.
 *
 * This function processes the input string `str`,
	transforming it so that the first letter

	* of each word is capitalized and all other letters are lowercased. A word is defined as
 * a sequence of letters that is preceded by any non-letter character (e.g.,
	space, punctuation).
 *
 * The function modifies the string in place and returns the modified string.
 *
 * @param str (char *) : The string to capitalize.
 *
 * @return (char *) : The modified string with capitalized words.
 */
char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] -= 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && !(str[i - 1] >= 'A' && str[i
				- 1] <= 'Z') && !(str[i - 1] >= '0' && str[i - 1] <= '9')
			&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}