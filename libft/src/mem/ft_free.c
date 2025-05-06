/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerberos <kerberos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:17:16 by sjacquet          #+#    #+#             */
/*   Updated: 2025/04/27 10:32:12 by kerberos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_free(void *ptr)
{
	if (ptr)
	{
		free(ptr);
		ptr = NULL;
	}
}

void	ft_free_arr(char **arr)
{
	size_t	i;

	if (arr)
	{
		i = 0;
		while (arr[i])
		{
			ft_free((void **)&arr[i]);
			i++;
		}
		ft_free((void **)arr);
	}
}

void	ft_free4all(void **ptrs)
{
	size_t	i;

	if (ptrs)
	{
		i = 0;
		while (ptrs[i])
		{
			ft_free(&ptrs[i]);
			i++;
		}
	}
}

void	ft_free_variadic(int num, ...)
{
	va_list	args;
	void	*ptr;
	int		i;

	va_start(args, num);
	i = 0;
	while (i < num)
	{
		ptr = va_arg(args, void *);
		if (ptr)
			ft_free(ptr);
		i++;
	}
	va_end(args);
}
