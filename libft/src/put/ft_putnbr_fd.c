/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacquet <sjacquet@student.s19.be>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:20:35 by sjacquet          #+#    #+#             */
/*   Updated: 2024/11/04 14:20:35 by sjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_putnbr_fd(int n, int fd) {
  char digit;
  int count;

  count = 0;
  if (n == -2147483648)
    count += ft_putstr_fd("-2147483648", fd);
  else if (n < 0) {
    count += ft_putchar_fd('-', fd);
    n = -n;
    count += ft_putnbr_fd(n, fd);
  } else if (n > 9) {
    count += ft_putnbr_fd(n / 10, fd);
    count += ft_putnbr_fd(n % 10, fd);
  } else {
    digit = n + '0';
    count += ft_putchar_fd(digit, fd);
  }
  return (count);
}
