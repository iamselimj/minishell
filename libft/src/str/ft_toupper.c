/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:05:27 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:19:39 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_toupper
 * @brief Converts a lowercase letter to its uppercase equivalent.
 *

	* This function checks if the character `c` is a lowercase letter (between 'a' and 'z').
 * If it is,
	the function returns the corresponding uppercase letter by subtracting 32 from its ASCII value.
 * If `c` is not a lowercase letter, it returns `c` unchanged.
 *
 * @param c (int) : The character to be converted.
 *
 * @return (int) : The uppercase version of `c` if it is a lowercase letter,
	otherwise returns `c` unchanged.
 */
int	ft_toupper(int c)
{
	// Check if the character `c` is a lowercase letter.
	if (c >= 97 && c <= 122)
		return (c - 32);
	// Convert to uppercase by subtracting 32 from the ASCII value.
	return (c);
	// Return the character unchanged if it's not lowercase.
}