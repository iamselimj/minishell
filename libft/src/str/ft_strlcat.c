/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:30:17 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:04:43 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strlcat
 * @brief Appends a string to another,
	ensuring the total length does not exceed a specified size.
 *

	* This function appends the string `src` to the end of the string `dst` while ensuring that

	* the total length of the resulting string does not exceed the specified size. It ensures

	* that `dst` remains null-terminated and performs safely even if `size` is smaller than
 * the length of `dst`.
 *
 * @param dst (char *) : The destination string, which will be appended to.
 * @param src (const char *) : The source string to be appended.

	* @param size (size_t) : The total size available for `dst` (including the null terminator).
 *

	* @return (size_t) : The total length of the string that would have been created if
 *                    there were unlimited space in `dst`.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		dst_len = size;
	if (dst_len == size)
		return (size + src_len);
	if (src_len < size - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, size - dst_len - 1);
		dst[size - 1] = 0;
	}
	return (dst_len + src_len);
}
