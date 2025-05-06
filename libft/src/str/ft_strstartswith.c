/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartswith.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:12:22 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:10:15 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strstartswith
 * @brief Checks if the string `s1` starts with the string `s2`.
 *
 * This function compares the beginning of the string `s1` with the string `s2`.
 * It returns 1 if `s1` starts with `s2`, and 0 otherwise.
 *
 * @param s1 (char *) : The string to be checked.
 * @param s2 (char *) : The string that should appear at the start of `s1`.
 *
 * @return (int) : Returns 1 if `s1` starts with `s2`, otherwise returns 0.
 */
int	ft_strstartswith(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}