/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:43:11 by                   #+#    #+#             */
/*   Updated: 2021/11/07 14:47:38 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	index;

	if (fd < 0 || !s)
		return ;
	index = 0;
	while (*(s + index))
	{
		write(fd, s + index, 1);
		++index;
	}
	write(fd, "\n", 1);
}
