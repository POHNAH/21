/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 21:21:38 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/02 23:20:19 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	p1;
	char	p2;
	char	p3;

	p1 = '0';
	while (p1 <= '7')
	{
		p2 = p1 + 1;
		while (p2 <= '8')
		{
			p3 = p2 + 1;
			while (p3 <= '9')
			{
				ft_putchar(p1);
				ft_putchar(p2);
				ft_putchar(p3);
				ft_putchar(',');
				ft_putchar(' ');
				p3++;
			}
			p2++;
		}
		p1++;
	}
}
