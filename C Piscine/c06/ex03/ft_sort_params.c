/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:36:52 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/09 13:54:07 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap_arg(char *arg[], int indexA, int indexB)
{
	char	*buf;

	buf = arg[indexA];
	arg[indexA] = arg[indexB];
	arg[indexB] = buf;
}

void	str_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		++i;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\n')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

void	print_params(int size, char *arg[])
{
	int	i;

	i = 1;
	while (i < size)
	{
		str_print(arg[i]);
		++i;
	}
}

int	main(int argc, char *argv[])
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
		while (i < argc - 1 - j)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap_arg(argv, i, i + 1);
				f = 0;
			}
			i++;
		}
		j++;
	}
	print_params(argc, argv);
}
