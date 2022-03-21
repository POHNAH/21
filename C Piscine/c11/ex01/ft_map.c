/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:20:55 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 23:35:23 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	index;
	int	*result;

	index = 0;
	result = (int *) malloc(sizeof(int) * length);
	if ((void *) 0 == result)
		return (result);
	while (index < length)
	{
		*(result + index) = (*f)(*(tab + index));
		++index;
	}
	return (result);
}
