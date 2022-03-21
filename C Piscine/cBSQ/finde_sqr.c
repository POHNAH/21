/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finde_sqr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:46:41 by                   #+#    #+#             */
/*   Updated: 2021/09/22 23:42:32 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ_header.h"

void	update_sqr(t_sqr *sqr, int x, int y, int size)
{
	sqr->size = size;
	sqr->x = x;
	sqr->y = y;
}

void	print_sqr(char **map, char *legend, t_sqr sqr)
{
	int	i;
	int	j;

	i = sqr.y;
	while (i < sqr.y + sqr.size)
	{
		j = sqr.x;
		{
			*(*(map + i) + j) = *(legend + 2);
			++j;
		}
		++i;
	}
	printf("print_sqr 4\n");
}

void	manipulation(int **map_int, t_val val, t_sqr *sqr)
{
	int	i;
	int	j;

	i = val.hight - 1;
	update_sqr(sqr, val.length, val.hight, 0);
	while (i > -1)
	{
		j = val.length - 1;
		while (j > -1)
		{
			if (*(*(map_int + i) + j) > 0)
				if (i != val.hight - 1 && j != val.length - 1)
					map_int[i][j] = min_triple(map_int[i + 1][j + 1],
							map_int[i][j + 1], map_int[i + 1][j]) + 1;
			if (sqr->size <= map_int[i][j]
				&& sum_of_squares(i, j) <= sum_of_squares(sqr->x, sqr->y))
				update_sqr(sqr, j, i, *(*(map_int + i) + j));
			--j;
		}
		--i;
	}
}

int	**create_matrix(char **map, int **map_int, t_val val, char empty)
{
	int	i;
	int	j;

	i = 0;
	while (i < val.hight)
	{
		*(map_int + i) = (int *) malloc(sizeof(int) * val.length);
		++i;
	}
	i = 0;
	while (i < val.hight)
	{
		j = 0;
		while (j < val.length)
		{
			if (*(*(map + i) + j) == empty)
				*(*(map_int + i) + j) = 1;
			else
				*(*(map_int + i) + j) = 0;
			++j;
		}
		++i;
	}
	return (map_int);
}

void	finde_sqr(char *fname)
{
	char	**map;
	int		**map_int;
	char	*legend;
	t_val	val;
	t_sqr	sqr;

	map = (char **) malloc(sizeof(char *) * 1000000);
	val.length = is_valide(fname, &map, &legend, &(val.hight));
	if (val.length > 0)
	{
		map_int = (int **) malloc(sizeof(int *) * val.hight);
		sqr.size = 1;
		create_matrix(map, map_int, val, *legend);
		manipulation(map_int, val, &sqr);
		if (sqr.size > -1)
			print_sqr(map, legend, sqr);
		free_int_array(map_int, legend, val.hight);
		print_array(map, val.hight);
	}
	else
		ft_putstr("map error\n\n", 2);
	printf("finde_sqr 10\n");
	free_char_array(map, &val);
}
