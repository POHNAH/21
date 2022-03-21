/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:32:19 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/14 19:46:51 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>

void	empty_file(void)
{
	char	c[1];

	while (read(1, c, 1))
		write(0, c, 1);
	return ;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int	name_file(char *fname, char *pname)
{
	int		file_dis;
	char	c[1];

	file_dis = open(fname, O_RDONLY);
	if (file_dis == -1)
	{
		write(2, pname, ft_strlen(pname));
		write(2, ": ", 2);
		write(2, fname, ft_strlen(fname));
		write(2, ": ", 2);
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
		return (0);
	}
	else
	{
		while (read(file_dis, c, 1))
			write(0, c, 1);
		return (close(file_dis));
	}
}

int	main(int argc, char *argv[])
{
	int		index;

	if (argc < 2)
		empty_file();
	else
	{
		index = 1;
		while (index < argc)
		{
			if (argv[index][0] == '-' && argv[index][1] == '\0')
				empty_file();
			else
				name_file(argv[index], basename(argv[0]));
			++index;
		}
	}
}
