/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:30:05 by                   #+#    #+#             */
/*   Updated: 2021/11/04 21:47:48 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length;
	char	*result;

	if ((void *) 0 == s)
		return ((void *) 0);
	length = ft_strlen(s);
	if (len == 0 || length <= start)
	{
		result = ft_calloc(1, sizeof(char));
		return (result);
	}
	if (len > length - start)
		len = length - start;
	result = (char *) malloc(sizeof(char) * (len + 1));
	if ((void *) 0 == result)
		return ((void *) 0);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
