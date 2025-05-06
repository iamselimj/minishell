/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:23:28 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:45:23 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_memcmp
 * @brief Compares two memory blocks byte by byte.
 *
 * This function compares the first `size` bytes of two memory blocks `str1` and
 * `str2`. It returns an integer less than, equal to, or greater than zero
 * depending on whether the first byte that does not match has a smaller,
 * equal, or larger value in `str1` than in `str2`.
 *
 * @param str1 (const void *) : Pointer to the first memory block to compare.
 * @param str2 (const void *) : Pointer to the second memory block to compare.
 * @param size (size_t) : The number of bytes to compare.
 *
 * @return (int) :
 *                 - 0 if the memory blocks are equal.
 *                 - A positive integer if the first byte that differs in `str1`
 *                   is greater than in `str2`.
 *                 - A negative integer if the first byte that differs in `str1`
 *                   is smaller than in `str2`.
 */
int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *)str1;
	ptr2 = (const unsigned char *)str2;
	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
