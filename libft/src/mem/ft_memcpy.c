/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:18:08 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:45:50 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_memcpy
 * @brief Copies a specified number of bytes from one memory block to another.
 *

	* This function copies `size` bytes from the memory area `src` to the memory area `dst`.
 * If either `dst` or `src` is NULL,
	the function will return the original `dst`.
 * The memory areas must not overlap. If the memory areas do overlap,
	use `ft_memmove` instead.
 *

	* @param dst (void *) : Pointer to the destination memory area where the content will be copied to.

	* @param src (const void *) : Pointer to the source memory area from where the content will be copied.
 * @param size (size_t) : The number of bytes to copy.
 *
 * @return (void *) : Returns the destination pointer `dst`.
 */
void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	unsigned char *tmp_dst;
	unsigned char *tmp_src;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (size > 0)
	{
		*tmp_dst++ = *tmp_src++;
		size--;
	}
	return (dst);
}