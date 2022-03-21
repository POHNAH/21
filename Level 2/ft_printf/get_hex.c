/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:54 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/16 15:00:31 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_hex(unsigned int n)
{
	unsigned int	num;
	int				index;
	char			*result;

	num = n;
	index = 0;
	while (num)
	{
		num = num / 16;
		++index;
	}
	result = (char *)malloc(sizeof(char) * (index + 1));
	if (!result)
		return (NULL);
	result[index--] = '\0';
	num = n;
	while (num && index >= 0)
	{
		if (num % 16 < 10)
			result[index--] = num % 16 + '0';
		else
			result[index--] = num % 16 + 87;
		num = num / 16;
	}
	return (result);
}
