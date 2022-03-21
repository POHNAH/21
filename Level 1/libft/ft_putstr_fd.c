/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:28:49 by                   #+#    #+#             */
/*   Updated: 2021/11/07 14:36:26 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	index;

	if (!s || fd < 0)
		return ;
	index = 0;
	while (*(s + index))
	{
		write(fd, s + index, 1);
		++index;
	}
}
