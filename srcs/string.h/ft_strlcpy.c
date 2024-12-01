/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:25:11 by jodougla          #+#    #+#             */
/*   Updated: 2024/12/01 16:58:24 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char		*tmp_src;
	size_t			i;

	tmp_src = src;
	i = 0;
	if (size)
	{
		while (*tmp_src && i++ < (size - 1))
			*dest++ = *tmp_src++;
		*dest = 0;
	}
	i = ft_strlen(src);
	return (i);
}