/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendswith.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:16:30 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:03:27 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strendswith
 * @brief Checks if a string `s1` ends with the substring `s2`.
 *

	* This function compares the ending portion of the string `s1` with the string `s2`
 * and returns 1 if `s1` ends with `s2`,
	and 0 otherwise. It does this by comparing
 * the last characters of `s1` with `s2` starting from the end of `s1`.
 *
 * @param s1 (char *) : The string to check.
 * @param s2 (char *) : The substring to check if it appears at the end of `s1`.
 *
 * @return (int) : 1 if `s1` ends with `s2`, 0 otherwise.
 */
int	ft_strendswith(char *s1, char *s2)
{
	int len_s1;
	int len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s2 > len_s1)
		return (0);
	return (ft_strcmp(s1 + len_s1 - len_s2, s2) == 0);
}