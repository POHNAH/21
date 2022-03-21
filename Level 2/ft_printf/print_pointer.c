/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:54 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/16 15:00:31 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long long pointer)
{
	int		result;
	char	*p;

	result = 0;
	if (pointer == 0)
		p = ft_strdup("0");
	else
		p = get_unsigned_long_long_hex(pointer);
	ft_putstr_fd("0x", 1);
	result = print_str(p);
	free (p);
	return (result + 2);
}
