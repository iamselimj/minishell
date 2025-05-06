/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:32:47 by kerberos          #+#    #+#             */
/*   Updated: 2025/05/06 06:15:52 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/**
 * @brief Check if the result overflows or underflows the int range.
 *
 * @param result (long) : The result to check.
 * @param sign (int) : The sign of the result.
 *
 * @return (int) : Returns INT_MAX if result is greater than INT_MAX,
 *                 INT_MIN if result is less than INT_MIN,
 *                 1 if the result is within the valid range.
 */
int	ft_isintflow(long result, int sign)
{
	if (sign == 1 && result > INT_MAX)
		return (INT_MAX);
	if (sign == -1 && result < (long)INT_MIN)
		return (INT_MIN);
	return (1);
}

/**
 * @brief Converts a string to an integer.
 *
 * @param str (const char *) : The string to be converted.
 *
 * @return (int) : The converted integer value.
 */
int	ft_atoi(const char *str)
{
	long	result;
	int		check;
	int		sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (ft_issign(*str))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		check = ft_isintflow(result, sign);
		if (check != 1)
			return (check);
		str++;
	}
	return (result * sign);
}
