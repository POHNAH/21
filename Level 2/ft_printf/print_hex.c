/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:54 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/16 15:00:31 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int h, int flag)
{
	char			*hex;
	int				result;
	unsigned int	num;

	num = h + 4294967295 + 1;
	if (num == 0)
		hex = ft_strdup("0");
	else
		hex = get_hex(num);
	if (!hex)
	{
		free (hex);
		return (-1);
	}
	if (flag == 'X')
		str_toupper(hex);
	result = print_str(hex);
	free (hex);
	return (result);
}
