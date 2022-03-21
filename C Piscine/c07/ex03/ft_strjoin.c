/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:15:21 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/10 23:33:58 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		len;
	char	*result_str;

	if (size < 1)
		return ("");
	len = 0;
	index = 0;
	while (index < size)
	{
		len += ft_strlen(*(strs + index));
		++index;
	}
	len += (size - 1) * ft_strlen(sep) + 1;
	result_str = malloc(sizeof(char) * len);
	*result_str = '\0';
	ft_strcat(result_str, *(strs));
	index = 1;
	while (index < size)
	{
		result_str = ft_strcat(result_str, sep);
		result_str = ft_strcat(result_str, *(strs + index));
		++index;
	}
	return (result_str);
}
