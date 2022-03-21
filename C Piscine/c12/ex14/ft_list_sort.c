/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:59:28 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/16 20:37:23 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	list_swap(t_list **elem, int *flag)
{
	t_list	*buf;

	buf = (*elem)->next;
	(*elem)->next = buf->next;
	buf->next = *elem;
	*elem = buf;
	*flag = 0;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*buf;
	int		flag;

	flag = 0;
	while (0 == flag)
	{
		flag = 1;
		if ((*cmp)((*begin_list)->data, (*begin_list)->next->data) > 0)
			list_swap(begin_list, &flag);
		buf = (*begin_list)->next;
		while ((void *) 0 != buf->next)
		{
			if ((*cmp)(buf->data, buf->next->data) > 0)
				list_swap(&buf, &flag);
			buf = buf->next;
		}
	}
}
