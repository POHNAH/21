/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check_1100.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:05:10 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 19:32:24 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define N 10

void	ft_foreach(int *tab, int length, void(*f)(int));
void	print_number(int n);

int	main(void)
{
	int	numbers[N];
	int	index;

	printf("ex00\n");
	index = 0;
	while (index < N)
	{
		numbers[index] = index * index;
		++index;
	}
	ft_foreach(numbers, N, print_number);
	return (0);
}
