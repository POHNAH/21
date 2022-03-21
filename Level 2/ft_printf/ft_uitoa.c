/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:38:32 by                   #+#    #+#             */
/*   Updated: 2021/11/07 14:00:48 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	num_len(unsigned int n)
{
	int	result;

	result = 1;
	if (n > 9)
	{
		while (n / 10 != 0)
		{
			++result;
			n /= 10;
		}
	}
	return (result);
}

char	*ft_uitoa(unsigned int n)
{
	int		count_figure;
	char	*result;

	count_figure = num_len(n);
	result = (char *) malloc(sizeof(char) * (count_figure + 1));
	if ((void *) 0 == result)
		return ((void *) 0);
	if (0 == n)
		return ("0");
	*(result + count_figure) = '\0';
	while (count_figure >= 0 && n != 0)
	{
		*(result + count_figure - 1) = '0' + n % 10;
		n /= 10;
		--count_figure;
	}
	return (result);
}
