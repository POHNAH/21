/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:54 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/16 15:00:31 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_flag(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || \
	c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (c);
	return (-1);
}

static int	parser(char *str, va_list args)
{
	int	index;
	int	result;
	int	flag;
	int	count;

	result = 0;
	index = 0;
	while (str[index])
	{
		count = 0;
		if (str[index] != '%')
			count = print_char(str[index]);
		else if (str[index] == '%' && str[index + 1])
		{
			flag = get_flag(str[index + 1]);
			if (flag > 0)
				count = print_flag(args, flag);
			++index;
		}
		if (count < 0)
			return (-1);
		result += count;
		++index;
	}
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	ar;
	int		result;
	char	*str;

	result = 0;
	str = ft_strdup(format);
	va_start(ar, format);
	result += parser(str, ar);
	va_end(ar);
	free (str);
	return (result);
}
