/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:57:53 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/11 23:37:31 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *src)
{
	int		i;

	i = 0;
	while (*(src + i) != '\0')
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*d;

	i = str_len(src) + 1;
	d = (char *) malloc(i);
	while (i > -1)
	{
		d[i] = src[i];
		--i;
	}
	return (d);
}

t_stock_str	get_struct(char *src)
{
	t_stock_str	*result;

	result = (t_stock_str *) malloc (sizeof(t_stock_str));
	result->size = str_len(src);
	result->str = ft_strdup(src);
	result->copy = ft_strdup(src);
	return (*result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			index;

	if (ac < 1)
		return ((void *) 0);
	result = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	index = 0;
	while (index < ac)
	{
		*(result + index) = get_struct(*(av + index));
	}
	*(result + index) = get_struct("");
	return (result);
}
