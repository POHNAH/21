/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:20:52 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 20:57:17 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char*))
{
	int	index;

	index = 0;
	while ((void *) 0 != *(tab + index))
	{
		if (0 != (*f)(*(tab + index)))
			return (1);
		++index;
	}
	return (0);
}
