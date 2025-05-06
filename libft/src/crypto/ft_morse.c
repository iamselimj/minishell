/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_morse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 20:46:21 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_morse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:51:15 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdlib.h>
#include <string.h>

/**
 * @function to_morse
 *
 * @brief Converts a character to its corresponding Morse code index.
 *

	* This function takes a character and returns its index in the Morse code table.
 * It handles uppercase letters, lowercase letters, and digits.
 *
 * @param c (char) : The character to convert.
 *
 * @return (char) : The index in the Morse code table, or
	-1 if the character is not supported.
 */
static char	to_morse(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A');
	if (c >= 'a' && c <= 'z')
		return (c - 'a');
	if (c >= '0' && c <= '9')
		return (c - '0' + 26);
	return (-1);
}

/**
 * @function ft_morse_encode
 *
 * @brief Encodes a string into Morse code.
 *
 * This function encodes the input string into Morse code. Each letter and digit
 * is converted to its corresponding Morse code representation.
 *
 * @param str (const char *) : The input string to be encoded.
 *
 * @return (char *) : The Morse code encoded string,
	or NULL if memory allocation fails.
 */
char	*ft_morse_enc(const char *str)
{
	static const char	*morse_table[36] = {".-", "-...", "-.-.", "-..", ".",
			"..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.",
			"---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--",
			"-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-",
			".....", "-....", "--...", "---..", "----."};
	char				*encoded;
	int					i;
	int					j;
	int					len;
	int					index;
	const char			*morse;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (to_morse(str[i]) != -1)
			len += 5;
		i++;
	}
	encoded = (char *)malloc(len * sizeof(char) + i);
	if (!encoded)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		index = to_morse(str[i]);
		morse = morse_table[index];
		if (index != -1)
		{
			while (*morse)
				encoded[j++] = *morse++;
			encoded[j++] = ' ';
		}
		i++;
	}
	encoded[j] = '\0';
	return (encoded);
}

/**
 * @function from_morse
 *
 * @brief Converts a Morse code string to its corresponding character.
 *

	* This function takes a Morse code string and returns its corresponding character.
 * It handles Morse code representations for uppercase letters and digits.
 *
 * @param morse (const char *) : The Morse code string to convert.
 * @param morse_table (const char **) : The Morse code table.
 *
 * @return (char) : The corresponding character,
	or '\0' if the Morse code is not supported.
 */
static char	from_morse(const char *morse, const char **morse_table)
{
	int	i;

	i = 0;
	while (i < 36)
	{
		if (strcmp(morse, morse_table[i]) == 0)
		{
			if (i < 26)
				return ('A' + i);
			else
				return ('0' + (i - 26));
		}
		i++;
	}
	return ('\0');
}

/**
 * @function ft_morse_decode
 *
 * @brief Decodes a Morse code string into a readable string.
 *
 * This function decodes the input Morse code string into a readable string.
 * Each Morse code sequence is converted to its corresponding character.
 *
 * @param morse (const char *) : The input Morse code string to be decoded.
 *
 * @return (char *) : The decoded string, or NULL if memory allocation fails.
 */
char	*ft_morse_dec(const char *morse)
{
	static const char	*morse_table[36] = {".-", "-...", "-.-.", "-..", ".",
			"..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.",
			"---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--",
			"-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-",
			".....", "-....", "--...", "---..", "----."};
	char				*decoded;
	int					i;
	int					j;
	int					len;
	int					k;
	char				morse_char[6];

	len = strlen(morse) / 5 + 1;
	decoded = (char *)malloc(len * sizeof(char));
	if (!decoded)
		return (NULL);
	i = 0;
	j = 0;
	while (morse[i])
	{
		k = 0;
		while (morse[i] && morse[i] != ' ')
			morse_char[k++] = morse[i++];
		morse_char[k] = '\0';
		if (morse[i] == ' ')
			i++;
		decoded[j++] = from_morse(morse_char, morse_table);
	}
	decoded[j] = '\0';
	return (decoded);
}
