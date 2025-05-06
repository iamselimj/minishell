/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:46:24 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:09:05 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_isdigit
 * @brief Checks if a character is a digit (0-9).
 *
 * This function returns true if the character passed as a parameter
 * is a digit, i.e., a character between '0' and '9' (inclusive).
 * It compares the ASCII values of the character to the values for
 * '0' and '9'.
 *
 * @params c (int) : The character to check, represented by its ASCII code.
 *
 * @return (int) : Returns 1 if the character is a digit (0-9),
 * otherwise returns 0.
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}