/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:45:00 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/05 14:05:59 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if (i == 1 && j == 1)
				ft_putchar('/');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('\\');
			else if (i == y && j == x)
				ft_putchar('/');
			else if (i == 1 || j == 1 || i == y || j == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
