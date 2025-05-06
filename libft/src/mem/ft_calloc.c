/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:01:45 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:44:37 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_calloc
 * @brief Allocates memory for an array of `count` elements,
	each of size `size`,
 *        and initializes all bytes to zero.
 *
 * This function is similar to `malloc`, but it also ensures that the allocated
 * memory is zeroed out, which is important for avoiding uninitialized memory
 * issues. The memory is set to zero byte by byte.
 *
 * @param count (size_t) : The number of elements to allocate.
 * @param size (size_t) : The size of each element in the array.
 *
 * @return (void *) : A pointer to the allocated memory,
	or NULL if the allocation fails.
 */
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}
