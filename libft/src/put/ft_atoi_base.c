/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:39:30 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:32:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static int	ft_is_valid_base(char c, const char *base) {
  while (*base) {
    if (c == *base)
      return (1);
    base++;
  }
  return (0);
}

static int	ft_get_value(char c, const char *base) {
  int i;

  i = 0;
  while (base[i]) {
    if (c == base[i])
      return (i);
    i++;
  }
  return (-1);
}

int	ft_atoi_base(const char *str, const char *base) {
  int sign;
  int result;
  int value;

  if (!str || !base || ft_strlen(base) < 2)
    return (0);
  sign = 1;
  result = 0;
  while (ft_isspace(*str))
    str++;
  if (*str == '-' || *str == '+') {
    if (*str == '-')
      sign = -1;
    str++;
  }
  while (*str && ft_is_valid_base(*str, base)) {
    value = ft_get_value(*str, base);
    if (value == -1)
      break ;
    result = result * ft_strlen(base) + value;
    str++;
  }
  return (result * sign);
}
