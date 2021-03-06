/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_char_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:42:59 by                   #+#    #+#             */
/*   Updated: 2021/09/22 23:41:37 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ_header.h"

void	free_char_array(char **map, t_val *val)
{
	int	i;

	i = val->hight - 1;
	while (i > -1)
	{
		free(*(map + i));
		--i;
	}
	free(map);
}
