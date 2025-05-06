/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strkeycmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:04:27 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_strkeycmp
 * @brief Compares a string to a key followed by an equals sign ('=').
 *

	* This function checks if the given string `str` starts with the `key` followed by
 * an equals sign ('='). If the string matches the pattern,
	the function returns 1;
 * otherwise, it returns 0.
 *
 * @param str (const char *) : The string to be compared.
 * @param key (const char *) : The key to check for at the start of `str`.
 *
 * @return (int) : 1 if `str` starts with `key` followed by an '=', 0 otherwise.
 */
int	ft_strkeycmp(const char *str, const char *key)
{
	size_t	key_len;

	key_len = ft_strlen(key);
	if (ft_strncmp(str, key, key_len) == 0 && str[key_len] == '=')
		return (1);
	return (0);
}
