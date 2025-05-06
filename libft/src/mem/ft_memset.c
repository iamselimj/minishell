/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:56:25 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:47:22 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_memset
 * @brief Sets a block of memory to a specific value.
 *

	* This function fills the memory block pointed to by `ptr` with the value of `c`,

	* treating `c` as an unsigned char. It sets the first `size` bytes of the memory
 * area to the specified value, effectively "zeroing" or "setting" the block.
 *
 * @param ptr (void *) : Pointer to the memory block to be set.
 * @param c (int) : The value to set, converted to unsigned char.
 * @param size (size_t) : The number of bytes to set.
 *
 * @return (void *) : A pointer to the memory block (`ptr`).
 */
void	*ft_memset(void *ptr, int c, size_t size)
{
	unsigned char *tmp;

	tmp = (unsigned char *)ptr;
	while (size > 0)
	{
		*tmp++ = (unsigned char)c;
		size--;
	}
	return (ptr);
}