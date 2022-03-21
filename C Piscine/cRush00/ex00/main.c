/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:46:38 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/05 13:39:57 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush(5, 5);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(7, 5);
	ft_putchar('\n');
	rush(5, 12);
	ft_putchar('\n');
	rush(0, 0);
	ft_putchar('\n');
	rush(-1, -1);
	ft_putchar('\n');
	rush(-1, 1);
	ft_putchar('\n');
	rush(1, -1);
	ft_putchar('\n');
	rush(1, -1);
	ft_putchar('\n');
	return (0);
}
