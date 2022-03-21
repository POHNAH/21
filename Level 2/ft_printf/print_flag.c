/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:54 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/16 15:00:31 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_flag(va_list args, int flag)
{
	if (flag == 'c')
		return (print_char(va_arg(args, int)));
	else if (flag == 's')
		return (print_str(va_arg(args, char *)));
	else if (flag == 'p')
		return (print_pointer(va_arg(args, unsigned long long)));
	else if (flag == 'd' || flag == 'i')
		return (print_int(va_arg(args, int)));
	else if (flag == 'u')
		return (print_unsigned_int(va_arg(args, unsigned int)));
	else if (flag == 'x' || flag == 'X')
		return (print_hex(va_arg(args, unsigned int), flag));
	else if (flag == '%')
		return (print_char('%'));
	return (-1);
}
