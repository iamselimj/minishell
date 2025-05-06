/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isquote.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:47:57 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:10:53 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_isquote
 * @brief Checks if a character is a quote (single or double).
 *
 * This function returns true if the character passed as a parameter is either
 * a single quote (') or a double quote ("). These characters are commonly used
 * in string literals or character constants in many programming languages.
 *
 * @params c (int) : The character to check, represented by its ASCII code.
 *
 * @return (int) : Returns 1 if the character is a quote (single or double),
 * otherwise returns 0.
 */
int	ft_isquote(int c)
{
	if (c == '\'' || c == '"')
		return (1);
	return (0);
}