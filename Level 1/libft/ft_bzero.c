/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:12:38 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/01 02:38:25 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*str;

	index = 0;
	str = s;
	while (index < n)
	{
		*(str + index) = 0;
		++index;
	}
}
