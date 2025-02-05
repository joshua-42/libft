/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_vargs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:44:44 by jodougla          #+#    #+#             */
/*   Updated: 2025/02/05 12:28:19 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../headers/libft.h"

void	put_in_tab(va_list ap)
{

}


char	*ft_strjoin_vargs(int n_arg, ...)
{
	va_list	ap;
	char	*str;
	char	*next_str;
	char	*final_str;

	va_start(ap, n_arg);

	while (n_arg != 0)
	{

	}
	va_end(ap);
	return(final_str);
}
