/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:30:17 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:35:48 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

double	ft_log(double x)
{
	double	result;
	double	term;
	double	y;
	int		n;

	if (x <= 0)
		return (-1);
	y = (x - 1) / (x + 1);
	result = 0;
	term = y;
	n = 1;
	while (ft_abs(term) > 0.000001)
	{
		result += term / n;
		term *= y * y;
		n += 2;
	}
	return (2 * result);
}

double	ft_log10(double x)
{
	return (ft_log(x) / ft_log(10));
}

double	ft_cos(double x)
{
	double	result;
	double	term;
	int		n;

	result = 1;
	term = 1;
	n = 1;
	while (ft_abs(term) > 0.000001)
	{
		term *= -x * x / (2 * n * (2 * n - 1));
		result += term;
		n++;
	}
	return (result);
}

double	ft_sin(double x)
{
	double	result;
	double	term;
	int		n;

	result = x;
	term = x;
	n = 1;
	while (ft_abs(term) > 0.000001)
	{
		term *= -x * x / (2 * n * (2 * n + 1));
		result += term;
		n++;
	}
	return (result);
}

double	ft_tan(double x)
{
	return (ft_sin(x) / ft_cos(x));
}

double	ft_acos(double x)
{
	if (x < -1 || x > 1)
		return (-1);
	return (ft_atan2(ft_sqrt(1 - x * x), x));
}

double	ft_asin(double x)
{
	if (x < -1 || x > 1)
		return (-1);
	return (ft_atan2(x, ft_sqrt(1 - x * x)));
}

double	ft_atan(double x)
{
	double	result;
	double	term;
	int		n;

	result = x;
	term = x;
	n = 1;
	while (ft_abs(term) > 0.000001)
	{
		term *= -x * x / (2 * n + 1);
		result += term;
		n++;
	}
	return (result);
}

double	ft_atan2(double y, double x)
{
	double	result;

	if (x == 0)
	{
		if (y > 0)
			result = 1.570796326794897;
		else if (y < 0)
			result = -1.570796326794897;
		else
			result = 0;
	}
	else
	{
		result = ft_atan(y / ft_sqrt(x * x + y * y));
		if (x < 0)
			result += 3.14159265358979;
	}
	return (result);
}

double	ft_cosh(double x)
{
	return ((ft_exp(x, 20) + ft_exp(-x, 20)) / 2);
}

double	ft_sinh(double x)
{
	return ((ft_exp(x, 20) - ft_exp(-x, 20)) / 2);
}

double	ft_tanh(double x)
{
	return (ft_sinh(x) / ft_cosh(x));
}

double	ft_hypot(double x, double y)
{
	return (ft_sqrt(x * x + y * y));
}