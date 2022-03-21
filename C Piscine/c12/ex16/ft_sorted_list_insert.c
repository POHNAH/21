/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:00:36 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/16 21:33:25 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	insert(t_list *elem, t_list *prev_elem, void *data, int (*cmp)())
{
	t_list	*buf;

	while ((void *) 0 != elem)
	{
		if ((*cmp)(elem->data, data) < 0)
		{
			buf = ft_create_elem(data);
			buf->next = elem;
			prev_elem->next = buf;
			break ;
		}
		prev_elem = elem;
		elem = elem->next;
	}
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*elem;

	if ((*cmp)((*begin_list)->data, data) < 0)
	{
		elem = ft_create_elem(data);
		elem->next = *begin_list;
		*begin_list = elem;
	}
	else
		insert((*begin_list)->next, *begin_list, data, cmp);
}
