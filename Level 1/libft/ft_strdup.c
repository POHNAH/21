/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:14:59 by                   #+#    #+#             */
/*   Updated: 2021/11/04 21:20:38 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		index;
	char	*result;

	index = 0;
	result = malloc(ft_strlen(s) + 1);
	if ((void *) 0 == result)
		return ((void *) 0);
	while (*(s + index) != '\0')
	{
		*(result + index) = *(s + index);
		++index;
	}
	*(result + index) = *(s + index);
	return (result);
}
