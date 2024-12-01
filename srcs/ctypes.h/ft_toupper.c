/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:52:05 by jodougla          #+#    #+#             */
/*   Updated: 2024/12/01 17:02:24 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	ft_toupper(int c)
{
	if ((unsigned int)c - 'a' < 26)
		return (c & ~32);
	return (c);
}