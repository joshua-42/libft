/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 02:59:45 by jodougla          #+#    #+#             */
/*   Updated: 2024/10/11 03:16:36 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		index;
	int			len;
	char		*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	index = 0;
	str = ft_calloc(len + 1, sizeof(char));
	if (str)
	{
		while (index < ft_strlen(s))
		{
			str[index] = f(index, s[index]);
			index++;
		}
	}
	return (str);
}
