/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 20:09:43 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 23:24:06 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	c = *str;
	i = 1;
	while (c != '\0')
	{
		write(1, &c, 1);
		c = *(str + i);
		i++;
	}
}
