/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strntail.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:18:48 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/05 18:31:21 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

char	*ft_strntail(char *str, int n)
{
    int		i;
	char	*s_copy;

	if (n > 0)
	{
		s_copy = (char *) malloc(sizeof(char) * 1024);
		if ((void *) 0 == s_copy)
		{
			ft_putstr("ERROR: Memory dosn't allocation.\n");
			return ((void *) 0);
		}
		i = 0;
		while (i < n && *(str + i) != '\0')
		{
			*(s_copy + i) = *(str + i);
			++i;
		}
		*(s_copy + i) = '\0';
		return (s_copy);
	}
	else if (n < 0)
		return (ft_strncpy(str, -n));
	else
		return ((void *) 0);
}
