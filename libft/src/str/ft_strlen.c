/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:54:22 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:05:19 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strlen
 * @brief Computes the length of a string.
 *
 * This function calculates the number of characters in a given string,
 * excluding the null terminator. It iterates over the string until it
 * encounters the null terminator (`'\0'`), counting the characters as it goes.
 *
 * @param str (const char *) : The string whose length is to be calculated.
 *

	* @return (size_t) : The length of the string (number of characters before the null terminator).
 */
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str && str[len])
		len++;
	return (len);
}
