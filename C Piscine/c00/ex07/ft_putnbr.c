/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:03:32 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 22:51:13 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	else
		if (nb < 0)
			ft_putchar('-');
	if (nb < 0)
		c = '0' - nb % 10;
	else
		c = '0' + nb % 10;
	ft_putchar(c);
}
