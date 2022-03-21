/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_first_num.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:40:28 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/19 20:45:16 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

void	sort_smalls(char **lines);

void	sort_by_first_num(char **lines)
{
	unsigned long int		i;
	unsigned long int		j;
	char					*temp;
	unsigned long int		iter;

	i = 0;
	j = 0;
	iter = 0;
	while (iter < 500)
	{
		while (lines[i + 1])
		{
			if (ft_strlen1(ft_split(lines[i], ':')[0])
				> ft_strlen1(ft_split(lines[i + 1], ':')[0]))
			{
				temp = lines[i];
				lines[i] = lines[i + 1];
				lines[i + 1] = temp;
			}
			i++;
		}
		iter++;
	}
	sort_smalls(lines);
}

void	sort_by_first_num1(char **lines)
{	
	unsigned long int		i;
	unsigned long int		j;
	char					*temp;
	unsigned long int		iter;

	i = 0;
	j = 0;
	iter = 0;
	while (iter < 500)
	{
		while (lines[i + 1])
		{
			if (ft_strlen1(ft_split(lines[i], ':')[0])
				> ft_strlen1(ft_split(lines[i + 1], ':')[0]))
			{
				temp = lines[i];
				lines[i] = lines[i + 1];
				lines[i + 1] = temp;
			}
			i++;
		}
		iter++;
	}
	sort_smalls(lines);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	sort_smalls(char **lines)
{	
	unsigned long int		i;
	unsigned long int		j;
	unsigned long int		iter;

	i = 0;
	j = 0;
	iter = 0;
	while (iter < 500)
	{
		while (lines[i + 1])
		{
			if ((ft_strlen1(ft_split(lines[i], ':')[0]) > 5)
				|| (ft_strlen1(ft_split(lines[i + 1], ':')[0]) > 5))
			{
				i++;
				continue ;
			}
			if (ft_atoi(ft_split(lines[i], ':')[0])
				> ft_atoi(ft_split(lines[i + 1], ':')[0]))
				ft_swap(&lines[i], &lines[i + 1]);
			i++;
		}
		iter++;
	}
}
