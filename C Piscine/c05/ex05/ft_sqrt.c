/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:56:52 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/09 13:09:05 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//verno no vidaet segmentation, tak kak glubokaya rekursiya
//a tak je est problema s iraciondal'nimi chislami
int	ft_recursive_sqrt(int nb)
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
//eto verno
int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (i < nb / 2)
		{
			if (i * i == nb)
				return (i);
			++i;
		}
		return (0);
	}
}
