/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:45:28 by jodougla          #+#    #+#             */
/*   Updated: 2025/02/06 14:17:49 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ft_type.h>

bool	ft_isalpha(int c)
{
	if (((unsigned int)c | 32) - 'a' < 26)
		return (1);
	return (0);
}
