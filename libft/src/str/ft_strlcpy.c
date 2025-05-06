/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:23:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:05:02 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strlcpy
 * @brief Copies a string to a destination buffer,
	ensuring it does not overflow.
 *
 * This function copies up to `size
	- 1` characters from the string `src` to `dst`,
 * null-terminating the result. It ensures that no more than `size
	- 1` characters
 * are copied, and the destination buffer is always null-terminated,
	avoiding buffer
 * overflows.
 *
 * @param dst (char *) : The destination buffer where the string will be copied.
 * @param src (const char *) : The source string to be copied.

	* @param size (size_t) : The total size of the destination buffer (including space for the null terminator).
 *

	* @return (size_t) : The total length of the string that would have been copied if
 *                    `dst` was large enough, excluding the null terminator.
 */
