/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 02:09:44 by jodougla          #+#    #+#             */
/*   Updated: 2024/12/07 02:47:52 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	dlst_len(t_dlist **lst)
{
	t_dlist	*tmp;
	int		i;

	tmp = *lst;
	i = 1;
	if (!lst)
		return (0);
	while (tmp->next != *lst)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
