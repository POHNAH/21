/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:00:55 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/16 23:34:50 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if ((void *) 0 == begin_list->next)
		return (begin_list);
	else
		return (ft_list_last(begin_list->next));
}

void	marge_mixed(t_list *begin_list1, t_list *begin_list2,
	int (*cmp)())
{
	t_list	*buf;

	if ((void *) 0 != begin_list2)
	{
		while ((*cmp)(begin_list1->data, begin_list2->data) < 0
			&& (void *) 0 != begin_list1->next)
			begin_list1 = begin_list1->next;
		buf = begin_list1->next;
		begin_list1->next = begin_list2;
		marge_mixed(begin_list2, buf, cmp);
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
	int (*cmp)())
{
	t_list	*end;

	end = ft_list_last(*begin_list1);
	if ((*cmp)(end->data, begin_list2->data) <= 0)
		end->next = begin_list2;
	else
	{
		end = ft_list_last(begin_list2);
		if ((*cmp)(end->data, (*begin_list1)->data) <= 0)
		{
			end->next = *begin_list1;
			*begin_list1 = begin_list2;
		}
		else if ((*cmp)((*begin_list1)->data, begin_list2->data) > 0)
		{
			end = begin_list2->next;
			begin_list2->next = *begin_list1;
			*begin_list1 = begin_list2;
			marge_mixed(*begin_list1, end, cmp);
		}
		else
			marge_mixed(*begin_list1, begin_list2, cmp);
	}
}
