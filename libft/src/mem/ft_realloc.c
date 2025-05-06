/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:48:09 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_realloc
 * @brief Resizes a memory block.
 *
 * This function reallocates a memory block to a new size, copying the data
 * from the old memory block to the new one. If the new size is larger, the
 * extra space is initialized to zero. It handles the memory resizing by
 * allocating a new block, copying the data, and then freeing the old block.
 *
 * @param ptr (void *) : Pointer to the previously allocated memory block.
 * @param old_size (unsigned long long) : The size of the old memory block.
 * @param new_size (unsigned long long) : The new size for the memory block.
 *
 * @return (void *) : Pointer to the newly allocated memory block, or NULL if
 *                     memory allocation fails.
 */
void	*ft_realloc(void *ptr, unsigned long long old_size,
		unsigned long long new_size)
{
	char				*new_ptr;
	unsigned long long	i;

	i = 0;
	new_ptr = ft_calloc(new_size, sizeof(char));
	while (i < old_size)
	{
		new_ptr[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}
