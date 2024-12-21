/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:32:58 by jodougla          #+#    #+#             */
/*   Updated: 2024/12/07 02:47:26 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

t_dlist	*dlst_new(void *content)
{
	t_dlist	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->prev = node;
	node->next = node;
	node->content = content;
	return (node);
}
