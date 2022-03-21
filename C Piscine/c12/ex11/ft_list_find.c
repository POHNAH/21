/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:58:14 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/16 18:36:10 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (0 == (*cmp)(begin_list->data, data_ref))
		return (begin_list);
	if ((void *) 0 != begin_list->next)
		return (ft_list_find(begin_list->next, data_ref, cmp));
}
