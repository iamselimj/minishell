/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:44:36 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:08:47 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_isascii
 * @brief Checks if a character is an ASCII character.
 *
 * This function returns true if the character passed as a parameter
 * is within the ASCII range, i.e., between 0 and 127 inclusive.
 * ASCII characters include control characters, digits, letters, and
 * punctuation marks.
 *
 * @params c (int) : The character to check, represented by its ASCII code.
 *
 * @return (int) : Returns 1 if the character is an ASCII character,
 * otherwise returns 0.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}