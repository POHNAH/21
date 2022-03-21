/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:45:44 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 00:36:17 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include <stdlib.h>

int		check_flag(char *flag, int type);
void	write_file(char *fname, char *pname, int size, int multiple);
int		ft_strlen(char *str);

void	empty_file(int count)
{
	char	*c;
	int		index;

	c = (char *) malloc(20000);
	index = 0;
	while (read(1, c + index, 1))
		++index;
	if (count == 0)
		write(1, c, index);
	else
		write(1, c + index - count, count);
	free(c);
}

void	error_log(char *fname, char *pname, int num)
{
	write(2, pname, ft_strlen(pname));
	write(2, ": ", 2);
	if (0 == num)
	{
		write(2, fname, ft_strlen(fname));
		write(2, ": ", 2);
		write(2, strerror(errno), ft_strlen(strerror(errno)));
	}
	else if (num == 1)
	{
		write(2, "illegal offset -- ", 18);
		write(2, fname, ft_strlen(fname));
	}
	else if (num == 2)
	{
		write(2, "option requires an argument -- c\n", 33);
		write(2, "usage: ft_tail [-c #] [file ...]\n", 33);
	}
	write(2, "\n", 1);
}

void	have_file(int argc, char *argv[], int size)
{
	int	index;

	if (4 == argc)
		write_file(argv[3], basename(argv[0]), size, 0);
	else if (4 < argc)
	{
		index = 3;
		while (index < argc)
		{
			write_file(argv[index], basename(argv[0]), size, argc - index);
			++index;
		}
	}
}

int	main(int argc, char *argv[])
{
	int		size;

	if (argc < 2)
		empty_file(0);
	else if (2 == argc)
	{
		size = check_flag(argv[1], 1);
		if (-2 == size)
			error_log(argv[1], basename(argv[0]), 1);
		else if (-1 == size)
			error_log(argv[1], basename(argv[0]), 2);
		else
			empty_file(size);
	}
	else if (3 <= argc)
	{
		size = check_flag(argv[2], 2);
		if (-2 == size)
			error_log(argv[2], basename(argv[0]), 1);
		else if (3 == argc)
			empty_file(size);
		else
			have_file(argc, argv, size);
	}
}
