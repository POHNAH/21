/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:14:00 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/09 19:27:13 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dig;
	int	index;
	int	size;

	size = max - min;
	if (size <= 0)
		return ((void *) 0);
	dig = (int *) malloc(sizeof(int) * size);
	index = 0;
	while (index < size)
	{
		dig[index] = min + index;
		++index;
	}
	return (dig);
}
