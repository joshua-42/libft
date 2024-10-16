/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:14:49 by jodougla          #+#    #+#             */
/*   Updated: 2024/10/10 19:01:15 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = -n;
			write (fd, "-", 1);
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		num = '0' + n % 10;
		write (fd, &num, 1);
	}
}