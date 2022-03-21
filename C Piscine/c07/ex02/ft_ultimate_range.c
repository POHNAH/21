/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:14:42 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/10 23:33:56 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	size;
	int	*dig;

	size = max - min;
	if (size <= 0)
	{
		range = (void *) 0;
		return (0);
	}
	dig = (int *) malloc(sizeof(int) * size);
	if (dig == (void *) 0)
	{
		range = (void *) 0;
		return (-1);
	}
	index = 0;
	while (index < size)
	{
		dig[index] = min + index;
		++index;
	}
	*range = dig;
	return (size);
}
