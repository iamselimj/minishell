/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:44:14 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_bzero

	* @brief Sets the first `size` bytes of the memory area pointed to by `ptr` to zero.
 *

	* This function is used to clear a memory area by setting all the bytes in that area
 * to zero. It is commonly used to initialize buffers or reset data in memory.
 *
 * @param ptr (void *) : Pointer to the memory area to be zeroed.
 * @param size (size_t) : Number of bytes to set to zero.
 *
 * @return None. The function modifies the memory in place.
 */
void	ft_bzero(void *ptr, size_t size)
{
	char	*tmp;

	tmp = (char *)ptr;
	while (size > 0)
	{
		*tmp++ = 0;
		size--;
	}
}
