/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:56:08 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/16 18:17:12 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev_elem;
	t_list	*elem;

	prev_elem = (void *) 0;
	elem = *begin_list;
	while ((void *) 0 != *begin_list)
	{
		*begin_list = elem->next;
		elem->next = prev_elem;
		prev_elem = elem;
		elem = *begin_list;
	}
	*begin_list = prev_elem;
}
