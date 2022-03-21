/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_triple.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:17:07 by                   #+#    #+#             */
/*   Updated: 2021/09/21 22:36:00 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	min_triple(int a, int b, int c)
{
	if (a >= c && b >= c)
		return (c);
	if (a >= b && c >= b)
		return (b);
	if (b >= a && c >= a)
		return (a);
	return (0);
}

int	min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

int	sum_of_squares(int a, int b)
{
	return (a * a + b * b);
}
