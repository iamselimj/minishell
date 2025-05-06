/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:52:44 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:11:13 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_isspace
 * @brief Checks if a character is a whitespace character.
 *

	* This function returns true if the character passed as a parameter is a whitespace
 * character, including space, tab, newline, vertical tab, form feed,
	and carriage return.

	* These are characters that are typically used for spacing or separating tokens in text.
 *
 * @params c (int) : The character to check, represented by its ASCII code.
 *
 * @return (int) : Returns 1 if the character is a whitespace character,
 * otherwise returns 0.
 */
int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}