/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:39:09 by jodougla          #+#    #+#             */
/*   Updated: 2024/12/01 16:58:08 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*tmp_s;

	tmp_s = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			tmp_s = (unsigned char *)s;
			break ;
		}
		s++;
	}
	if (!(unsigned char)c)
		return ((char *)s);
	return ((char *)tmp_s);
}
