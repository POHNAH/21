/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:12:38 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/04 18:53:40 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*ssrc;
	unsigned char	*ddest;

	if (dest == src)
		return (dest);
	index = 0;
	ssrc = (unsigned char *) src;
	ddest = (unsigned char *) dest;
	while (index < n)
	{
		*(ddest + index) = *(ssrc + index);
		++index;
	}
	return (dest);
}
