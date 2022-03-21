/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:05:05 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/19 20:40:15 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

char	*read_file(char *name)
{
	int		current_file;
	char	symbol;
	char	*buf;
	int		i;

	i = 0;
	symbol = 0;
	if (name == 0)
		return (0);
	current_file = open(name, O_RDONLY);
	if (current_file == -1)
		return (0);
	buf = malloc(15000);
	while (read(current_file, &symbol, 1))
	{
		buf[i] = symbol;
		i++;
	}
	if (close(current_file) == -1)
	{
		free(buf);
		return (0);
	}
	return (buf);
}

int	parse_all(char **names, char *name)
{
	char	*temp;
	int		i;
	int		j;
	int		iter_names;

	i = 0;
	j = 0;
	iter_names = 0;
	temp = read_file(name);
	if (temp <= 0)
		return (0);
	while (temp[i + 1])
	{
		if (temp[i] == '\n')
		{
			names[iter_names++][j] = '\0';
			j = 0;
			names[iter_names] = malloc (2000);
			i++;
			continue ;
		}
		names[iter_names][j++] = temp[i++];
	}
	free (temp);
	return (1);
}

int	find_bad(int *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (arr[i] == -42)
			return (0);
	}
	return (1);
}

int	call_all(char **names, char **big_names, int arr[1000], char *dict_name)
{
	if (!parse_all(names, dict_name))
		return (0);
	sort_by_first_num(names);
	if (split_names_nums(names, arr, big_names) != 1)
	{
		return (0);
	}
	if (!find_bad(arr))
		return (0);
	return (1);
}

int	read_dic(char *dict_name, int *NUM, char **NUM_NAME[], char **THOUSAND[])
{
	*names = malloc(1000);
	*big_names = malloc(1000);
	if (*names == 0 || *big_names == 0)
		return (0);
	*names[0] = malloc (2000);
	*big_names[0] = malloc (2000);
	if (dict_name == 0)
		return (0);
	else
	{
		if (!call_all(*names, *big_names, arr, dict_name))
			return (0);
		return (1);
	}
	return (0);
}
