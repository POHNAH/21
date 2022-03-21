/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 07:13:24 by                   #+#    #+#             */
/*   Updated: 2021/11/04 16:03:30 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	p = (char *)haystack;
	if (needle[0] == '\0')
		return ((char *)(haystack));
	i = 0;
	while (*(p + i) != '\0' && i < len)
	{
		if (*(p + i) == *needle)
		{
			j = 1;
			while (*(p + i + j) == *(needle + j)
				&& *(p + i + j) != '\0' && i + j < len)
				j++;
			if (*(needle + j) == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return ((void *) 0);
}
