/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:58:33 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/16 19:29:55 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
	void (*free_fct)(void *))
{
	t_list	*buf;

	if ((void *) 0 != (*begin_list)->next)
		ft_list_remove_if((*begin_list)->next, data_ref, cmp, free_fct);
	if (0 == (*cmp)((*begin_list)->data, data_ref))
	{
		buf = (*begin_list)->next;
		(*free_fct)((*begin_list)->data);
		free((*begin_list)->data);
		free((*begin_list)->next);
		*begin_list = buf;
	}
}
