/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:25:32 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 00:38:03 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	error_log(char *fname, char *pname, int num);
int		ft_strlen(char *str);

int	file_lenth(char *fname, char *pname)
{
	int		file_dis;
	int		result;
	char	c[1];

	file_dis = open(fname, O_RDONLY);
	if (file_dis == -1)
	{
		error_log(fname, pname, 0);
		return (-1);
	}
	else
	{
		result = 0;
		while (read(file_dis, c, 1))
			++result;
		close(file_dis);
		return (result);
	}
}

void	f_write(char *fname, char *pname, int size, int lenth)
{
	int		file_dis;
	int		index;
	char	c[1];

	file_dis = open(fname, O_RDONLY);
	if (file_dis == -1)
	{
		error_log(fname, pname, 0);
	}
	else
	{
		index = 0;
		while (read(file_dis, c, 1))
		{
			if (index > lenth - size - 1)
				write(0, c, 1);
			++index;
		}
		close(file_dis);
	}
}

void	write_file(char *fname, char *pname, int size, int multiple)
{
	int		lenth;

	lenth = file_lenth(fname, pname);
	if (lenth != -1)
	{
		if (0 != multiple)
		{
			write(0, "==> ", 4);
			write(0, fname, ft_strlen(fname));
			write(0, " <==\n", 5);
		}
		lenth = file_lenth(fname, pname);
		f_write(fname, pname, size, lenth);
		if (1 < multiple)
		{
			write(0, "\n", 1);
		}
	}
}
