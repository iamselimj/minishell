/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:46:14 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_memdup
 * @brief Duplicates a block of memory.
 *

	* This function allocates a new memory block and copies `size` bytes from the given pointer `ptr` into the new block.

	* The new memory block is initialized using `ft_calloc` and then the content is copied using `ft_memcpy`.
 * If the allocation fails, `NULL` is returned.
 *
 * @param ptr (void *) : Pointer to the memory to duplicate.
 * @param size (size_t) : The number of bytes to duplicate.
 *

	* @return (void *) : A pointer to the newly allocated memory block containing the copied data,
	or `NULL` on failure.
 */
void	*ft_memdup(void *ptr, size_t size)
{
	void *new_ptr;

	new_ptr = ft_calloc(1, size);
	if (new_ptr == NULL)
		return (NULL);
	ft_memcpy(new_ptr, ptr, size);
	return (new_ptr);
}