/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:56:56 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/09 13:13:17 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//osnovano na prediduschey, vidaet oshibku pamyaty tak kak koren' ogromniy
int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		i = ft_sqrt(nb - 1);
		return ((i + nb / i) / 2);
	}
}

int	ft_is_prime_with_sqrt(int nb)
{
	int	i;
	int	sqrt;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		sqrt = ft_sqrt(nb);
		i = 2;
		while (i <= sqrt)
		{
			if (nb % i == 0)
				return (0);
			++i;
		}
		return (1);
	}
}

//verno
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		i = 2;
		while (i * i <= nb)
		{
			if (nb % i == 0)
				return (0);
			++i;
		}
		return (1);
	}
}
