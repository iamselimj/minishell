/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:15:01 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_skipdel
 * @brief Skips over any delimiters in the string `str`.
 *
 * This function moves the pointer `str` forward until it points to a character
 * that is not in the `delim` string.
 *
 * @param str (char *) : The string to be processed.
 * @param delim (const char *) : The string containing delimiters.
 *
 * @return (char *) : The pointer to the first non-delimiter character in `str`.
 */
char	*ft_skipdel(char *str, const char *delim)
{
	while (*str && ft_strchr(delim, *str))
		str++;
	return (str);
}