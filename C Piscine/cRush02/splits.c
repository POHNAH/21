/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:56:10 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/19 20:45:13 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

int	ft_strlen1(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char *str, char splitter)
{
	char	**res;
	int		i;
	int		j;
	int		pos;

	pos = 0;
	j = 0;
	i = 0;
	res = malloc (1000);
	res[0] = malloc (1000);
	res[1] = malloc (1000);
	while (str[i])
	{
		if (str[i] == splitter)
		{
			res[0][j] = '\0';
			j = 0;
			pos = 1;
			i++;
			continue ;
		}
		res[pos][j++] = str[i++];
	}
	return (res);
}

int	split_names_nums(char **names, int nums[1000], char **big_names)
{
	char	**temp;
	int		i;
	int		j;

	temp = malloc (ft_strlen1(*names) * 3);
	i = 0;
	j = 0;
	while (names[i])
	{
		temp[0] = remove_double_spaces((ft_split(names[i], ':')[0]));
		temp[1] = remove_double_spaces((ft_split(names[i], ':')[1]));
		names[i] = temp[1];
		if (ft_atoi(temp[0]) < 0)
			return (-42);
		if (ft_strlen1(temp[0]) < 3 && ft_strlen1(temp[0]) > 0)
			nums[i] = ft_atoi(temp[0]);
		else if (ft_strlen1(temp[0]) > 0)
		{
			names[i] = "";
			nums[i] = -1;
			big_names[j++] = temp[1];
		}
		i++;
	}
	return (1);
}
