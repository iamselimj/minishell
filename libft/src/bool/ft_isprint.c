/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:52:44 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:10:38 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_isprint
 * @brief Checks if a character is printable.
 *

	* This function returns true if the character passed as a parameter is a printable
 * character. Printable characters include characters with ASCII values from 32
 * (space) to 126 (tilde ~), which includes letters, digits, punctuation, and
 * some other symbols.
 *
 * @params c (int) : The character to check, represented by its ASCII code.
 *
 * @return (int) : Returns 1 if the character is printable, otherwise returns 0.
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}