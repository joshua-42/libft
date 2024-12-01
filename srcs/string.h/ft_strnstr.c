/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:09:40 by jodougla          #+#    #+#             */
/*   Updated: 2024/12/01 16:58:46 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		size;

	if ((!big || !little) && !len)
		return (NULL);
	size = ft_strlen(little);
	if (!size)
		return ((char *) big);
	while (*big && len >= size)
	{
		if (*big == *little && !ft_strncmp(big, little, size))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}