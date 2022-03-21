/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:20:48 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 21:08:31 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	index;
	int	result;

	index = 0;
	result = 0;
	while (index < length)
	{
		if (0 != (*f)(*(tab + index)))
			++result;
		++index;
	}
	return (result);
}
