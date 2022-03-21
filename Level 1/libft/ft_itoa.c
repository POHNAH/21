/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:38:32 by                   #+#    #+#             */
/*   Updated: 2021/11/07 14:00:48 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	num_len(int n)
{
	int	result;

	result = 1;
	if (n > 9 || n < -9)
	{
		while (n / 10 != 0)
		{
			++result;
			n /= 10;
		}
	}
	return (result);
}

char	*num_to_char(int n, int count_figure, int negative)
{
	char	*result;

	result = (char *) malloc(sizeof(char) * (count_figure + 1));
	if ((void *) 0 == result)
		return ((void *) 0);
	if (0 == n)
	{
		*result = '0';
		*(result + 1) = '\0';
		return (result);
	}
	if (negative < 0)
		*result = '-';
	*(result + count_figure) = '\0';
	while (count_figure >= 0 && n != 0)
	{
		*(result + count_figure - 1) = '0' + negative * (n % 10);
		n /= 10;
		--count_figure;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		count_figure;
	int		negative;

	count_figure = num_len(n);
	negative = 1;
	if (n < 0)
	{
		negative = -1;
		++count_figure;
	}
	result = num_to_char(n, count_figure, negative);
	return (result);
}
