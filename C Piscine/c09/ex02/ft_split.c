/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:03:05 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/14 13:12:24 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		++i;
	return (i);
}

int	index_of(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (str[i + j] == to_find[j] && str[i + j] != '\0')
				++j;
			if (to_find[j] == '\0')
				return (i);
		}
		++i;
	}
	return (-1);
}

char	*strcut(char *str, int start, int size)
{
	char	*result;
	int		index;

	if (size <= 0)
		return ("");
	else
	{
		result = (char *) malloc(size + 1);
		index = 0;
		while (index < size)
		{
			*(result + index) = *(str + start + index);
			++index;
		}
		*(result + index) = '\0';
	}
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		find_sep;
	int		index;
	int		start;

	result = (char **) malloc(sizeof(char *) * 1000);
	index = 0;
	start = 0;
	find_sep = index_of(str, charset);
	while (find_sep > 0)
	{
		*(result + index) = strcut(str, start, find_sep);
		++index;
		start = start + find_sep + ft_strlen(charset);
		find_sep = index_of(&str[start], charset);
		while (str[start] != '\0' && find_sep == 0)
		{
			start = start + ft_strlen(charset);
			find_sep = index_of(&str[start], charset);
		}
	}
	if (ft_strlen(str) - start > 0)
		*(result + index++) = strcut(str, start, ft_strlen(str) - start);
	*(result + index) = "0";
	return (result);
}
