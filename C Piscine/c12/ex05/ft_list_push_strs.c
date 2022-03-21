/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:54:56 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/16 19:12:13 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		index;
	t_list	*result;
	t_list	*buf;

	index = 0;
	result = (void *) 0;
	buf = (void *) 0;
	while (index < size)
	{
		if ((void *) 0 != result)
			buf = result;
		result = ft_create_elem(*(strs + index));
		result->next = buf;
		++index;
	}
	return (result);
}
