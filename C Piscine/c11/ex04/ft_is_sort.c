/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:20:44 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 23:01:16 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	index;
	int	f_sort;
	int	f_rev_sort;
	int	check_res;

	index = 1;
	f_sort = 1;
	f_rev_sort = 1;
	while (index < length)
	{
		check_res = (*f)(*(tab + index - 1), *(tab + index));
		if (check_res > 0)
			f_sort *= 0;
		else if (check_res < 0)
			f_rev_sort *= 0;
		++index;
	}
	return (f_rev_sort || f_sort);
}
