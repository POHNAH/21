/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:12:48 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/22 23:41:41 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ_header.h"

void	print_array(char **map, int hight)
{
	int		i;

	i = 0;
	while (i < hight)
	{
		ft_putstr(*(map + i), 1);
		ft_putstr("\n", 1);
		++i;
	}
	ft_putstr("\n", 1);
}
