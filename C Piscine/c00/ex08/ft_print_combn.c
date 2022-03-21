/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:25:31 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/03 00:10:00 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <math.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkArray(char arr[], int r)
{
	char	s[10];
	char	e[10];
	int	i;

	i = 0;
	while (i < r)
	{
		s[i] = '0' + i;
		e[r - 1 - i] = '9' - i;
		i++;
	}
	i = 0;
	while (i < r)
	{
		if (arr[i] < s[i] || arr[i] > e[i])
			return (0);
		i++;
	}
	i = 0;
	while (i < r - 1)
	{
		if (arr[i] >= arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	printnb(int n, int r)
{
	char	num[10];
	int	f;
	int	i;

	i = 0;
	while (i < r)
	{
		num[r - 1 - i] = '0' + n % 10;
		n /= 10;
		i++;
	}
	i = checkArray(num, r);
	if (i == 1)
	{
		f = 0;
		i = 0;
		while (i < r)
		{
			ft_putchar(num[i]);
			if (num[i] == '9' - r + 1 + i)
				f++;
			i++;
		}
		if (f != r)
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	while (i < pow(10, n))
	{
		printnb(i, n);
		i++;
	}
}
