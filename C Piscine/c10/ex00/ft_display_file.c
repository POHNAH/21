/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:27:21 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/14 18:12:28 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int		file_dis;
	char	c[1];

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		file_dis = open(argv[1], O_RDONLY);
		if (file_dis == -1)
			write(2, "Cannot read file.\n", 18);
		else
		{
			while (read(file_dis, c, 1))
				write(0, c, 1);
		}
		return (close(file_dis));
	}
}
