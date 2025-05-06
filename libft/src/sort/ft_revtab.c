/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:47 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:54:57 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_revinttab
 * @brief Reverses an integer array in place.
 *
 * This function takes an integer array and its size, and reverses the array
 * by swapping the elements in place. It does this by iterating over the first
 * half of the array and swapping each element with the corresponding element
 * from the second half.
 *
 * @param tab (int *) : A pointer to the integer array to reverse.
 * @param size (int) : The size of the integer array.
 */
void	ft_revtab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
