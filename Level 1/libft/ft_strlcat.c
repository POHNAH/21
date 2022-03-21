/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:15:21 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/04 20:23:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	index = 0;
	if (dst_len >= size)
		return (src_len + size);
	index = 0;
	while (dst_len + index < size - 1 && index < src_len)
	{
		*(dst + dst_len + index) = *(src + index);
		++index;
	}
	*(dst + dst_len + index) = '\0';
	return (dst_len + src_len);
}
