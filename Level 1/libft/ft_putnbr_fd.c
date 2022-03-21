/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:44:09 by                   #+#    #+#             */
/*   Updated: 2021/11/07 15:35:31 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

static int	power_ten(int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (0 == power)
		return (1);
	result = 1;
	while (power - 1)
	{
		result *= 10;
		--power;
	}
	return (result);
}

void	put_num(int n, int fd, int len, int negative)
{
	char	c;
	int		rank;

	while (len > 0)
	{
		rank = power_ten(len);
		c = '0' + negative * (n / rank);
		write(fd, &c, 1);
		n %= rank;
		--len;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		negative;
	char	c;

	if (fd < 0)
		return ;
	negative = 1;
	if (n < 0)
	{
		c = '-';
		write(fd, &c, 1);
		negative = -1;
	}
	put_num(n, fd, num_len(n), negative);
}
