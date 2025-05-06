/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:04:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strjoin
 * @brief Concatenates two strings into a new string.
 *
 * This function allocates memory and concatenates the string `s1` with `s2`.
 * The result is a new string containing the contents of `s1` followed by `s2`.

	* The original strings are not modified. If either of the input strings is `NULL`,
 * the function returns `NULL`.
 *
 * @param s1 (const char *) : The first string to join.
 * @param s2 (const char *) : The second string to join.
 *
 * @return (char *) : A new string containing the concatenated result, or `NULL`
 * if memory allocation fails or any input is `NULL`.
 *
 * @note The caller is responsible for freeing the returned string.
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	res = (char *)ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}
