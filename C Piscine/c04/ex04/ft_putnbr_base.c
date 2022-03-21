/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:58:26 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/07 20:32:50 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_double(char *base, char c)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (1);
		else
			++index;
	}
	return (0);
}

int	check_base(char *str)
{
	char	s[300];
	int		base;

	base = 0;
	s[base] = '\0';
	while (str[base] != '\0')
	{
		if (str[base] == '+' || str[base] == '-')
			return (0);
		else if (check_double(s, str[base]) == 0)
		{
			s[base] = str[base];
			s[base + 1] = '\0';
		}
		else
			return (0);
		++base;
	}
	if (base != 0)
		return (base);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		b;
	int		index;
	char	c[1000];

	b = check_base(base);
	if (b > 1)
	{
		if (nbr < 0)
			write(1, "-", 1);
		index = 0;
		while (nbr != 0)
		{
			if (nbr < 0)
				c[index] = base[-1 * (nbr % b)];
			else
				c[index] = base[nbr % b];
			nbr /= b;
			++index;
		}
		while (index > 0)
		{
			write(1, &c[index - 1], 1);
			--index;
		}
	}
}
