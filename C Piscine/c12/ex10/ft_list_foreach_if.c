/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:57:50 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/16 19:11:14 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)())
{
	if (0 == (*cmp)(begin_list->data, data_ref))
		(*f)(begin_list->data);
	if ((void *) 0 != begin_list->next)
		ft_list_foreach_if(begin_list->next, f, data_ref, cmp);
}
