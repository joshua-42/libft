/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:23:11 by jodougla          #+#    #+#             */
/*   Updated: 2024/11/25 21:26:18 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

bool	ft_issign(int c)
{
	if (c == 43 || c == 45)
		return (1);
	return (0);
}
