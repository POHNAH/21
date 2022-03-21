/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:12:38 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/04 18:35:41 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ssrc;
	unsigned char	*ddest;
	size_t			index;

	if (dest == src || n == 0)
		return (dest);
	else if (dest > src)
	{
		index = n;
		ssrc = (unsigned char *) src;
		ddest = (unsigned char *) dest;
		while (index > 0)
		{
			--index;
			*(ddest + index) = *(ssrc + index);
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
