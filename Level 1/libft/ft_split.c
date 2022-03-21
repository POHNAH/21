/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:03:05 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/07 05:00:00 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**result_free(char **s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		++i;
	}
	return ((void *)0);
}

static size_t	str_count(char const *str, char charset)
{
	size_t	result;
	size_t	index;
	size_t	flag;

	result = 0;
	index = 0;
	flag = 0;
	while (*(str + index))
	{
		if (*(str + index) == charset && flag == 1)
			flag = 0;
		if (*(str + index) != charset && flag == 0)
		{
			++result;
			flag = 1;
		}
		++index;
	}
	return (result);
}

static void	get_word(char **str, char charset, size_t *len)
{
	size_t	index;

	*str += *len;
	*len = 0;
	index = 0;
	while (**str && **str == charset)
		(*str)++;
	while ((*str)[index])
	{
		if ((*str)[index] == charset)
			return ;
		++(*len);
		++index;
	}
}

static char	**get_result(char const *str, char charset)
{
	char	**result;
	char	*start;
	size_t	len_world;
	size_t	result_count;
	size_t	index;

	result_count = str_count(str, charset);
	result = (char **) malloc(sizeof(char *) * (result_count + 1));
	if ((void *) 0 == result)
		return ((void *) 0);
	index = 0;
	start = (char *) str;
	len_world = 0;
	while (index < result_count)
	{
		get_word(&start, charset, &len_world);
		*(result + index) = ft_substr(start, 0, len_world);
		if ((void *) 0 == *(result + index))
			return (result_free(result));
		++index;
	}
	*(result + index) = (void *) 0;
	return (result);
}

char	**ft_split(char const *str, char charset)
{
	if ((void *) 0 == str)
		return ((void *) 0);
	return (get_result(str, charset));
}
