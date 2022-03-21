/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_int_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:42:59 by                   #+#    #+#             */
/*   Updated: 2021/09/22 23:41:08 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ_header.h"

void	free_int_array(int **map_int, char *legend, int hight)
{
	int	i;

	i = 0;
	while (i < hight)
	{
		free(*(map_int + i));
		++i;
	}
	free(map_int);
	free(legend);
}
