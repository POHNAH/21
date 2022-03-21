/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:28:20 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/02 23:25:48 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	dubleIntToChar(int n)
{
	char	c;

	c = '0' + n / 10;
	write(1, &c, 1);
	c = '0' + n % 10;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			dubleIntToChar(i);
			ft_putchar(' ');
			dubleIntToChar(j);
			ft_putchar(',');
			ft_putchar(' ');
			j++;
		}
		i++;
	}
}
