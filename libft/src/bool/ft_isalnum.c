/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:47:57 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:07:58 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_isalnum
 * @brief Checks if a character is alphanumeric (letter or digit).
 *
 * This function returns true if the character passed as a parameter
 * is either a letter (uppercase or lowercase) or a digit. It uses
 * the functions `ft_isalpha` and `ft_isdigit` to determine this.
 *
 * @params c (int) : The character to check, represented by its ASCII code.
 *
 * @return (int) : Returns 1 if the character is alphanumeric,
 * otherwise returns 0.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
