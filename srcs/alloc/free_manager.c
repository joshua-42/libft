/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:16:33 by jodougla          #+#    #+#             */
/*   Updated: 2025/02/24 12:43:26 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <alloc.h>

void	free_manager(void *adress)
{
	t_list	**lst;
	t_list	*curent;
	t_list	*prev;

	if (!adress)
		return ;
	lst = get_alloc();
	curent = *lst;
	prev = NULL;
	while (curent && curent->content != adress)
	{
		prev = current;
		curent = curent->next;
	}
	if (prev == NULL)
		*lst = curent->next;
	else
		prev->next = content->next;
	free(content->content);
	free(content);
}
