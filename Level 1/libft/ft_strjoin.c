/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:15:21 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/04 23:31:50 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*result;

	if ((void *) 0 == s1 && (void *) 0 == s2)
		return ((void *) 0);
	else if ((void *) 0 == s1)
		result = ft_strdup(s2);
	else if ((void *) 0 == s2)
		result = ft_strdup(s1);
	else
	{
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
		result = ft_calloc(len, sizeof(char));
		if ((void *) 0 == result)
			return ((void *) 0);
		ft_strlcat(result, s1, len);
		ft_strlcat(result, s2, len);
	}
	return (result);
}
