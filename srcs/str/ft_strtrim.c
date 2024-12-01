/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:13:56 by jodougla          #+#    #+#             */
/*   Updated: 2024/12/01 17:00:00 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

static int	ft_isset(char c, char *set)
{
	while (*set != c && *set)
		set++;
	if (!*set)
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		size;

	if (!s1)
		return (NULL);
	if (!*set)
		return (ft_strdup(s1));
	while (ft_isset(*s1, (char *)set))
		s1++;
	size = ft_strlen(s1);
	while (ft_isset(s1[size - 1], (char *)set) && size)
		size--;
	str = ft_substr(s1, 0, size);
	if (!str)
		return (NULL);
	return (str);
}
