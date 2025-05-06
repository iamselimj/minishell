/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:28:19 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:08:23 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_isalpha

	* @brief Checks if a character is an alphabetic letter (either uppercase or lowercase).
 *
 * This function returns true if the character passed as a parameter
 * is either an uppercase or a lowercase letter. It uses the functions
 * `ft_islower` and `ft_isupper` to determine this.
 *
 * @params c (int) : The character to check, represented by its ASCII code.
 *

	* @return (int) : Returns 1 if the character is alphabetic (either uppercase or lowercase),
 * otherwise returns 0.
 */
int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}