/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:47:57 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:09:39 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_islower
 * @brief Checks if a character is a lowercase letter.
 *
 * This function returns true if the character passed as a parameter
 * is a lowercase letter, i.e., a character between 'a' and 'z' (inclusive).
 * It compares the ASCII value of the character to the values for 'a' and 'z'.
 *
 * @params c (int) : The character to check, represented by its ASCII code.
 *
 * @return (int) : Returns 1 if the character is a lowercase letter,
 * otherwise returns 0.
 */
int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}