/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:54:22 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:47:44 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_memswap
 * @brief Swaps the contents of two memory blocks.
 *

	* This function swaps the content of two memory areas pointed to by `a` and `b`.

	* It uses a temporary variable to exchange the bytes of the two blocks one by one.
 * The function performs the swap byte by byte for the specified `size`.
 *
 * @param a (void *) : Pointer to the first memory block.
 * @param b (void *) : Pointer to the second memory block.
 * @param size (size_t) : The number of bytes to swap between the two blocks.
 */
void	ft_memswap(void *a, void *b, size_t size)
{
	unsigned char *ptra;
	unsigned char *ptrb;
	unsigned char tmp;
	size_t i;

	ptra = (unsigned char *)a;
	ptrb = (unsigned char *)b;
	i = 0;
	while (i < size)
	{
		tmp = ptra[i];
		ptra[i] = ptrb[i];
		ptrb[i] = tmp;
		i++;
	}
}