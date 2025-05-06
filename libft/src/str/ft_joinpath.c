/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joinpath.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:20:01 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 18:59:09 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_pathjoin
 * @brief Joins two paths together, ensuring the correct format.
 *
 * This function concatenates two strings, `p1` and `p2`,
	representing file paths.

	* It ensures that `p1` ends with a "/" before joining it with `p2`. If `p1` already
 * ends with a "/", it simply concatenates `p1` and `p2`. Otherwise,
	it adds a "/"
 * between them.
 *
 * @param p1 (char *) : The first path.
 * @param p2 (char *) : The second path.
 *
 * @return (char *) : A new string representing the combined path.
 *         Returns NULL in case of memory allocation failure.
 */
char	*ft_pathjoin(char *p1, char *p2)
{
	if (!ft_strendswith(p1, "/"))
		return (ft_strjoin(p1, ft_strjoin("/", p2)));
	return (ft_strjoin(p1, p2));
}