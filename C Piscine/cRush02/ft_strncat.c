/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 20:01:41 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/05 20:13:41 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	char			*buf;

	buf = (char *) malloc(sizeof(char) *(ft_strlen(dest) + ft_strlen(src)
			+ 1));
	i = 0;
	while (dest[i] != '\0')
	{
		buf[i] = dest[i];
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		buf[i + j] = src[j];
		j++;
	}
	buf[i + j] = '\0';
	return (buf);
}
