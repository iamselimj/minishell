/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:11:32 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:05:45 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strmapi
 * @brief Applies a function to each character of a string,
	creating a new string.
 *

	* This function takes a string and a function as parameters. It applies the given function
 * to each character of the string,
	passing the index and the character itself to the function.
 * It then constructs a new string with the modified characters.
 *
 * @param s (const char *) : The string to be modified.
 * @param f (char (*)(unsigned int,
		char)) : A function to apply to each character.

	*                                       It takes the index and the character and returns a modified character.
 *
 * @return (char *) : A new string with the results of applying the function,
	or NULL if there is an error.
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s || !f)
		return (NULL);
	res = (char *)ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
