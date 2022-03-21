/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 05:55:49 by                   #+#    #+#             */
/*   Updated: 2021/11/01 06:19:47 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	unsigned char	cc;
	size_t			index;

	cs = (unsigned char *) s;
	cc = (unsigned char) c;
	index = 0;
	while (index < n)
	{
		if (*(cs + index) == cc)
			return ((void *)(s + index));
		++index;
	}
	return ((void *)0);
}
