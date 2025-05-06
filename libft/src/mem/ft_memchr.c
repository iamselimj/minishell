/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:19:51 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:44:59 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_memchr
 * @brief Locates the first occurrence of a character `c` in a memory block.
 *
 * This function searches for the first occurrence of the byte `c` in the
 * memory area `str` of the specified `size`. If the character is found,
 * it returns a pointer to the matching byte. If `c` is not found, the function
 * returns `NULL`.
 *
 * @param str (const void *) : Pointer to the memory block to search.
 * @param c (int) : The byte to search for.
 * @param size (size_t) : The number of bytes to search in the memory block.
 *
 * @return (void *) : A pointer to the first occurrence of the byte `c`,
 *                     or NULL if the byte is not found.
 */
void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	uc;

	ptr = (unsigned char *)str;
	uc = (unsigned char)c;
	i = 0;
	while (i < size)
	{
		if (ptr[i] == uc)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
