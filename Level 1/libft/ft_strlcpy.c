/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:15:21 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/04 18:57:54 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (0 == size)
		return (ft_strlen(src));
	while (index < size - 1 && *(src + index))
	{
		*(dst + index) = *(src + index);
		++index;
	}
	*(dst + index) = '\0';
	return (ft_strlen(src));
}
