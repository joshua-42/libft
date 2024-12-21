/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:38:49 by jodougla          #+#    #+#             */
/*   Updated: 2024/12/07 02:48:20 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

void	dlst_clear(t_dlist **lst, void (*del)(void *))
{
	t_dlist	*tmp;
	t_dlist	*tmp2;

	tmp = (*lst)->next;
	tmp2 = (*lst)->next->next;
	while (tmp != *lst)
	{
		if (del)
			del(tmp->content);
		free(tmp);
		tmp = tmp2;
		tmp2 = tmp->next;
	}
	if (del)
		del(tmp->content);
	free (*lst);
	free(lst);
}
