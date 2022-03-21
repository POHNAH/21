/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:40:28 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/19 20:45:38 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

char	*remove_double_spaces(char *str);

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

char	*remove_double_spaces(char *str)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	dest = malloc(500);
	while (ft_isspace(str[i]))
		i++;
	while (str[i] != '\0')
	{
		while (ft_isspace(str[i]) && ft_isspace(str[i + 1]))
			i++;
		dest[j] = str[i];
		j++;
		i++;
	}
	if (ft_isspace(str[i - 1]))
		j--;
	dest[j] = '\0';
	return (dest);
}
