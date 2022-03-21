/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check_1104.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:05:10 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 22:30:00 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define N 5

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	more(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	nbr[N] = {1, 2, 3, 4, 5};
	int	nbr1[N] = {5, 4, 3, 2, 1};
	int	nbr2[N] = {1, 3, 2, 5, 4};
	int	nbr3[N] = {1, 1, 1, 1, 1};
	int	nbr4[N] = {1, 2, 2, 3, 4};
	int	nbr5[N] = {5, 4, 4, 3, 2};

	printf("ex04\n");
	printf("ft_is_sort({1, 2, 3, 4, 5},"
		" 5, more) = %d\n", ft_is_sort(nbr, N, more));
	printf("ft_is_sort({5, 4, 3, 2, 1},"
		" 5, more) = %d\n", ft_is_sort(nbr1, N, more));
	printf("ft_is_sort({1, 3, 2, 5, 4},"
		" 5, more) = %d\n", ft_is_sort(nbr2, N, more));
	printf("ft_is_sort({1, 1, 1, 1, 1},"
		" 5, more) = %d\n", ft_is_sort(nbr3, N, more));
	printf("ft_is_sort({1, 2, 2, 3, 4},"
		" 5, more) = %d\n", ft_is_sort(nbr4, N, more));
	printf("ft_is_sort({5, 4, 4, 3, 2},"
		" 5, more) = %d\n", ft_is_sort(nbr5, N, more));
	return (0);
}
