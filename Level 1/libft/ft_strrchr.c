/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 04:55:59 by                   #+#    #+#             */
/*   Updated: 2021/11/04 19:35:20 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	int		len;
	char	ch;

	len = ft_strlen(s);
	index = len;
	ch = c;
	if (ch == 0)
		return ((char *)(s + len));
	while (index > -1)
	{
		if (*(s + index) == ch)
			return ((char *)(s + index));
		--index;
	}
	return ((void *) 0);
}
