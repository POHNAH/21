/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:57:05 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/08 22:17:03 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	point_check(int x, int y, int *cols)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (y == cols[i] || y + x - i == cols[i] || y - x + i == cols[i])
			return (1);
		++i;
	}
	return (0);
}

void	print_queens(int *cols, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = '0' + cols[i];
		write(1, &c, 1);
		++i;
	}
	write(1, "\n", 1);
}

int	ten_queens(int n_col, int *cols, int count, int size)
{
	int	row;

	row = 0;
	while (row < size)
	{
		if (point_check(n_col, row, cols) == 0)
		{
			cols[n_col] = row;
			if (n_col == size - 1)
			{
				print_queens(cols, size);
				++count;
			}
			else
				count = ten_queens(n_col + 1, cols, count, size);
		}
		++row;
	}
	*(cols + n_col) = -1;
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	cols[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		cols[i] = -1;
		++i;
	}
	return (ten_queens(0, cols, 0, 10));
}
