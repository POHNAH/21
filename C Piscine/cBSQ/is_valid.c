/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:12:48 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/22 23:40:55 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ_header.h"

int	check_map(char **map, char *legend, int hight)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(*map);
	while (i < hight)
	{
		if (len != ft_strlen(*(map + i)))
			return (-1);
		j = 0;
		while (j < len)
		{
			if (*(*(map + i) + j) != *legend
				&& *(*(map + i) + j) != *(legend + 1)
				&& *(*(map + i) + j) != *(legend + 2))
				return (-1);
			++j;
		}
		++i;
	}
	return (len);
}

int	read_map(int f_dis, char ***map)
{
	char	*buf;
	int		f;
	int		i;

	buf = (char *) malloc(sizeof(char) * 100000);
	f = 0;
	i = 0;
	while (read(f_dis, buf + i, 1))
	{
		if ('\n' == *(buf + i))
		{
			*(buf + i) = '\0';
			*(*map + f) = ft_strdup(buf);
			++f;
			i = -1;
		}
		++i;
	}
	free(buf);
	return (f);
}

int	is_valide(char *fname, char ***map, char **legend, int *hight)
{
	int		f_dis;

	if (ft_strlen(fname) == 0)
		f_dis = 1;
	else
		f_dis = open(fname, O_RDONLY);
	if (-1 == f_dis)
		return (f_dis);
	else
	{
		*hight = get_legend(f_dis, legend);
		if (*hight != read_map(f_dis, map) || *hight <= 0)
		{
			close(f_dis);
			return (-1);
		}
		close(f_dis);
		f_dis = check_map(*map, *legend, *hight);
		if (f_dis <= 0)
			return (-1);
		else
			return (f_dis);
	}
}
