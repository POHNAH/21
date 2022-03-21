/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check_1101.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:05:10 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 19:32:21 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define N 10

int	*ft_map(int *tab, int length, int(*f)(int));

int	square(int i)
{
	return (i * i);
}

int	main(void)
{
	int	numbers[N];
	int	index;
	int	*num;

	printf("ex01\n");
	index = 0;
	while (index < N)
	{
		numbers[index] = index * index;
		++index;
	}
	num = ft_map(numbers, N, square);
	index = 0;
	while (index < N)
	{
		printf("%6d ", *(num + index));
		++index;
	}
	return (0);
}
