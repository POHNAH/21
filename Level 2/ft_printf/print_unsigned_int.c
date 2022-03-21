/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:54 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/16 15:00:31 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned_int(unsigned int uns_int)
{
	unsigned int	num;
	char			*u_num;
	int				result;

	num = (unsigned int)(uns_int + 4294967295 + 1);
	if (num == 0)
		u_num = ft_strdup("0");
	else
		u_num = ft_uitoa(num);
	if (!u_num)
	{
		free (u_num);
		return (-1);
	}
	result = print_str(u_num);
	free (u_num);
	return (result);
}
