/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check_0900.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:12:08 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/13 18:29:02 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int	x;
	int	y;

	ft_putstr("ex00\n");
	ft_putchar('W');
	ft_putchar('\n');
	printf("Before x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After x = %d, y = %d\n", x, y);
	printf("Lehth of \"56789012345678901234\" :%d\n", ft_strlen("56789012345678901234"));
	printf("\"123\" ??? \"234\" :%d\n", ft_strcmp("123", "234"));
	printf("\"dvsffw5\" ??? \"srtge5ef\" :%d\n", ft_strcmp("dvsffw5", "srtge5ef"));
}
