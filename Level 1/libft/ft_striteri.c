/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:20:43 by                   #+#    #+#             */
/*   Updated: 2021/11/07 14:24:53 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int	index;

	if ((void *) 0 == s || (void *) 0 == f)
		return ;
	index = 0;
	while (*(s + index))
	{
		f(index, s + index);
		++index;
	}
}
