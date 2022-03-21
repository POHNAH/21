/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:57:49 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/19 20:12:37 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int				res;
	int				i;
	unsigned int	temp;
	int				no_minus;

	no_minus = 1;
	temp = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45)
		return (-42);
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= '0'
			&& str[i] <= '9')
			temp = temp * 10 + str[i] - '0';
		else
			break ;
		i++;
	}
	res = temp * no_minus;
	return (res);
}
