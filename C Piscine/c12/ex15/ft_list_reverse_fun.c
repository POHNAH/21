/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:59:51 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/16 21:08:22 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (0 > nbr)
		return ((void *) 0);
	else if (0 == nbr)
		return (begin_list);
	else if (0 < nbr)
		return (ft_list_at(begin_list->next, nbr - 1));
}

int	ft_list_size(t_list *begin_list)
{
	if ((void *) 0 == begin_list->next)
		return (1);
	else
		return (1 + ft_list_size(begin_list->next));
}

int	swap_data(t_list *begin_list, int indexA, int indexB)
{
	t_list	*a;
	t_list	*b;
	void	*data;

	a = ft_list_at(begin_list, indexA);
	b = ft_list_at(begin_list, indexB);
	data = a->data;
	a->data = b->data;
	b->data = data;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int	size;
	int	index;

	size = ft_list_size(begin_list);
	index = 0;
	while (index < size)
	{
		swap_data(begin_list, index, size - index);
		++index;
	}
}
