/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strntail.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:18:48 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/21 18:14:06 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ_header.h"

char	*ft_strntail(char *str, int n)
{
	int		position;
	char	*s_copy;

	if (n > 0)
	{
		position = ft_strlen(str) - n;
		if (position < 0)
			position = 0;
		s_copy = ft_strdup(str + position);
		return (s_copy);
	}
	else if (n < 0)
		return (ft_strncpy(str, -n));
	else
		return ((void *) 0);
}
