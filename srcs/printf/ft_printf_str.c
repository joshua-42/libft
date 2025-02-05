/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:49:22 by jodougla          #+#    #+#             */
/*   Updated: 2025/01/19 22:18:54 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putchar(int c)
{
	write(2, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	char		*tmp_str;

	if (str == NULL)
	{
		write (2, "(null)", 6);
		return (6);
	}
	tmp_str = str;
	while (*tmp_str)
		tmp_str++;
	write(1, str, tmp_str - str);
	return (tmp_str - str);
}
