/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:04:20 by jodougla          #+#    #+#             */
/*   Updated: 2024/12/01 16:58:54 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*tmp_s;

	tmp_s = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			tmp_s = (unsigned char *)s;
		s++;
	}
	if (!(unsigned char)c)
		return ((char *)s);
	return ((char *)tmp_s);
}
