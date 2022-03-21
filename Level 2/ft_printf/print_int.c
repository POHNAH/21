/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:54 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/16 15:00:31 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int n)
{
	char	*number;
	int		result;

	if (n == 0)
		number = ft_strdup("0");
	else
		number = ft_itoa(n);
	if (!number)
	{
		free (number);
		return (-1);
	}
	result = print_str(number);
	free (number);
	return (result);
}
