/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:02:07 by sjacquet          #+#    #+#             */
/*   Updated: 2025/05/06 06:16:08 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates the string `s1` by allocating memory for a copy.
 *
 * @param s1 (const char *) : String to duplicate.
 *
 * @return (char *) : Pointer to the duplicated string, or NULL on failure.
 */
char	*ft_strdup(const char *s1) {
  char *dup;
  size_t i;

  dup = (char *)ft_calloc(1, ft_strlen(s1) + 1);
  if (!dup)
    return (NULL);
  i = 0;
  while (s1[i]) {
    dup[i] = s1[i];
    i++;
  }
  dup[i] = 0;
  return (dup);
}
