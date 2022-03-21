/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:18:48 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/05 18:31:21 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ_header.h"

char	*ft_strncpy(char *str, int n)
{
	char	*s_copy;

	if (n > 0)
	{
		s_copy = ft_strdup(str);
		if (n < ft_strlen(str))
			*(s_copy + n + 1) = '\0';
		return (s_copy);
	}
	else if (n < 0)
		return (ft_strntail(str, -n));
	else
		return ((void *) 0);
}
