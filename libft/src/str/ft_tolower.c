/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:06:27 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:19:11 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_tolower
 * @brief Converts an uppercase letter to its lowercase equivalent.
 *

	* This function checks if the character `c` is an uppercase letter (between 'A' and 'Z').
 * If it is,
	the function returns the corresponding lowercase letter by adding 32 to its ASCII value.
 * If `c` is not an uppercase letter, it returns `c` unchanged.
 *
 * @param c (int) : The character to be converted.
 *
 * @return (int) : The lowercase version of `c` if it is an uppercase letter,
	otherwise returns `c` unchanged.
 */
int	ft_tolower(int c)
{
	// Check if the character `c` is an uppercase letter.
	if (c >= 65 && c <= 90)
		return (c + 32);
			// Convert to lowercase by adding 32 to the ASCII value.
	return (c);         
		// Return the character unchanged if it's not uppercase.
}