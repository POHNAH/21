/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 06:23:37 by                   #+#    #+#             */
/*   Updated: 2021/11/01 06:52:39 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	size_t			index;

	cs1 = (unsigned char *) s1;
	cs2 = (unsigned char *) s2;
	index = 0;
	while (index < n)
	{
		if (*(cs1 + index) != *(cs2 + index))
			return ((int)(*(cs1 + index) - *(cs2 + index)));
		++index;
	}
	return (0);
}
