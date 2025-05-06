/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:11:48 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 19:03:43 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/**
 * @function ft_striteri
 * @brief Applies a function to each character of a string with its index.
 *
 * This function iterates over each character in the string `s` and applies the
 * function `f` to each character,
	passing the index of the character and a pointer

	* to the character itself as arguments to `f`. This allows modification of each character
 * based on its index.
 *
 * @param s (char *) : The string to iterate over.
 * @param f (void (*)(unsigned int,
		char *)) : The function to apply to each character.
 *
 * @return void : This function has no return value.
 *
 * @note The function does nothing if either `s` or `f` is `NULL`.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
