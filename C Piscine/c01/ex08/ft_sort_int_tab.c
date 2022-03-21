/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 21:00:51 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/03 21:19:01 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	if (*a == 0)
	{
		*a = *b;
		*b = 0;
	}
	else if (*b == 0)
	{
		*b = *a;
		*a = 0;
	}
	else
	{
		*a += *b;
		*b = *a - *b;
		*a -= *b;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	f;

	j = 0;
	f = 0;
	while (f == 0)
	{
		f = 1;
		i = 0;
		while (i < size - 1 - j)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				ft_swap(tab + i, tab + i + 1);
				f = 0;
			}
			i++;
		}
		j++;
	}
}
