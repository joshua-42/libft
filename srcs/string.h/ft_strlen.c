/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:17:21 by jodougla          #+#    #+#             */
/*   Updated: 2024/12/01 16:58:31 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

size_t	ft_strlen(const char *s)
{
	const char	*tmp_s;

	tmp_s = s;
	while (*tmp_s)
		tmp_s++;
	return (tmp_s - s);
}
