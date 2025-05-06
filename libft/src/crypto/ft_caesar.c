/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_caesar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:56:18 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_caesar_cipher
 *
 * @brief Applies the Caesar cipher to a string.
 *
 * This function applies the Caesar cipher to the input string,
	shifting each letter
 * by a specified number of positions in the alphabet.
 *
 * @param str (char *) : The input string to be encoded.
 * @param shift (int) : The number of positions to shift each letter.
 *
 * @return (char *) : The encoded string.
 */
char	*ft_caesar(char *str, int shift)
{
	int i;

	i = 0;
	shift %= 26;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = ((str[i] - 'A' + shift) % 26) + 'A';
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((str[i] - 'a' + shift) % 26) + 'a';
		}
		i++;
	}
	return (str);
}