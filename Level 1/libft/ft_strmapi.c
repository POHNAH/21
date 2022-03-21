/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:05:16 by                   #+#    #+#             */
/*   Updated: 2021/11/07 14:18:55 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;
	size_t	index;

	if ((void *) 0 == s || (void *) 0 == f)
		return ((void *) 0);
	len = ft_strlen(s);
	result = (char *) malloc(len + 1);
	if ((void *) 0 == result)
		return ((void *) 0);
	index = 0;
	while (*(s + index))
	{
		*(result + index) = f(index, *(s + index));
		++index;
	}
	*(result + index) = '\0';
	return (result);
}
