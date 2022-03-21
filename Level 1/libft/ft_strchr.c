/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 04:55:27 by                   #+#    #+#             */
/*   Updated: 2021/11/04 19:31:24 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	ch;

	index = 0;
	ch = c;
	while (*(s + index))
	{
		if (*(s + index) == ch)
			return ((char *)(s + index));
		++index;
	}
	if (c == 0)
		return ((char *)(s + index));
	return ((void *) 0);
}
