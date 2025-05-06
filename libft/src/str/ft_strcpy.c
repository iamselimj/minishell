/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:23:28 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:02:50 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strcpy
 * @brief Copies a string from source to destination.
 *
 * This function copies the null-terminated string `src` into the `dest` buffer,
	including

	* the null terminator. It ensures that the destination string will be properly terminated
 * by a null byte.
 *

	* The function stops copying when the null terminator (`\0`) of the source string is encountered.
 *

	* @param dest (char *) : The destination buffer where the string will be copied to.
 * @param src (const char *) : The source string to copy from.
 *
 * @return (char *) : A pointer to the destination string (`dest`).
 */
char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
