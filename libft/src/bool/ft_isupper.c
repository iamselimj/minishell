/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:47:57 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:11:29 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_isupper
 * @brief Checks if a character is an uppercase letter.
 *

	* This function returns true if the character passed as a parameter is an uppercase letter,
 * i.e.,
	a character between 'A' and 'Z' (inclusive). It compares the ASCII value of the character
 * to the values for 'A' and 'Z'.
 *
 * @params c (int) : The character to check, represented by its ASCII code.
 *
 * @return (int) : Returns 1 if the character is an uppercase letter,
	otherwise returns 0.
 */
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}