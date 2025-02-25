/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:54:22 by jodougla          #+#    #+#             */
/*   Updated: 2025/02/25 10:40:16 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <alloc.h>

static t_list	**get_alloc(void)
{
	static t_list	*lst;

	if (!lst)
		lst = ft_lstnew(NULL);
	return (&lst);
}

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
		prev = curent;
		curent = curent->next;
	}
	if (prev == NULL)
		*lst = curent->next;
	else
		prev->next = curent->next;
	free(curent->content);
	free(curent);
}

void	push(void *malloc_adress)
{
	t_list	**alloc;

	alloc = get_alloc();
	ft_lstadd_front(alloc, ft_lstnew(malloc_adress));
}

__attribute__ ((destructor)) void	free_alloc(void)
{
	t_list	**alloc;
	t_list	*tmp;

	alloc = get_alloc();
	if (!alloc)
		return ;
	tmp = *alloc;
	while (tmp)
	{
		tmp = (*alloc)->next;
		free ((*alloc)->content);
		free (*alloc);
		*alloc = tmp;
	}
}
