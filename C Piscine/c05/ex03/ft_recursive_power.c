/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:56:44 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/09 12:54:59 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		if (nb == -1)
		{
			if (power % 2 == 0)
				return (1);
			else
				return (-1);
		}
		else if (nb == 1)
			return (1);
		return (0);
	}
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
