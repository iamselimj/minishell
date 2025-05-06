/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:20:01 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:46:37 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_memmove
 * @brief Safely copies memory from one location to another.
 *
 * This function copies `len` bytes from the memory area `src` to `dst`,
	ensuring that the copy is safe even when the memory regions overlap.

	* If the destination memory block (`dst`) is located after the source memory block (`src`),
	the copy happens in reverse order to avoid overwriting the source data before it is copied.
 * If the memory regions do not overlap, the copying proceeds as usual.
 *
 * @param dst (void *) : Pointer to the destination memory block.
 * @param src (const void *) : Pointer to the source memory block.
 * @param len (size_t) : The number of bytes to copy.
 *
 * @return (void *) : A pointer to the destination memory block (`dst`).
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *c_dst;
	const unsigned char *c_src;

	if (!dst && !src)
		return (NULL);
	c_dst = (unsigned char *)dst;
	c_src = (const unsigned char *)src;
	if (c_dst > c_src)
		while (len--)
			c_dst[len] = c_src[len];
	else
		while (len--)
			*c_dst++ = *c_src++;
	return (dst);
}