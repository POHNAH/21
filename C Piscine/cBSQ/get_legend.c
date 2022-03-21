/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_legend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:18:54 by                   #+#    #+#             */
/*   Updated: 2021/09/22 23:41:19 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ_header.h"

int	check_legend(char **legend)
{
	char	*buf;
	int		hight;
	int		k;

	hight = getnum(**legend);
	if (-1 != hight)
	{
		buf = *legend;
		*legend = ft_strntail(buf, 3);
		*(buf + ft_strlen(buf) - 3) = '\0';
		hight = ft_atoi(buf);
		k = ft_strlen(buf);
		free(buf);
		if (**legend != *((*legend) + 1) && *((*legend) + 1) != *((*legend) + 2)
			&& **legend != *((*legend) + 2) && hight > 0
			&& k == ft_nbrlen(hight))
			return (hight);
		else
			return (-1);
	}
	else
		return (-1);
}

void	read_legend(int f_dis, char **legend)
{
	char	*buf;
	int		i;

	buf = (char *) malloc(sizeof(char) * 1000);
	i = 0;
	while (read(f_dis, buf + i, 1))
	{
		if ('\n' == *(buf + i))
		{
			*(buf + i) = '\0';
			break ;
		}
		++i;
	}
	*legend = buf;
}

int	get_legend(int f_dis, char **legend)
{
	read_legend(f_dis, legend);
	return (check_legend(legend));
}
