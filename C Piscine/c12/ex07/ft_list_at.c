/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:55:45 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/16 17:22:57 by ralfredi         ###   ########.fr       */
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
