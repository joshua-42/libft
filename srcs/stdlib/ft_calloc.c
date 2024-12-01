/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:49:04 by jodougla          #+#    #+#             */
/*   Updated: 2024/12/01 17:00:22 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*mem;

	mem = malloc (nmeb * size);
	if (!mem)
		return (NULL);
	mem = ft_memset(mem, 0, nmeb * size);
	return (mem);
}
