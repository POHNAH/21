/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:34:56 by                   #+#    #+#             */
/*   Updated: 2021/11/05 14:59:53 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_char(char const ch, char const *set)
{
	int	index;

	index = 0;
	while (*(set + index))
	{
		if (*(set + index) == ch)
			return (1);
		++index;
	}
	return (0);
}

static size_t	make_trim(char *str, char const *set, size_t *len)
{
	size_t	start;

	start = 0;
	while (1 == check_char(*(str + start), set))
		++start;
	str += start;
	*len = ft_strlen(str);
	while (1 == check_char(*(str + *len - 1), set) && *len > 0)
		*len -= 1;
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	char	*result;

	if ((void *) 0 == s1)
		return ((void *) 0);
	if ((void *) 0 == set || 0 == ft_strlen(s1) || 0 == ft_strlen(set))
		return (ft_strdup(s1));
	len = 0;
	start = make_trim((char *) s1, set, &len);
	result = malloc(len + 1);
	if ((void *) 0 == result)
		return ((void *) 0);
	ft_strlcpy(result, s1 + start, len + 1);
	return (result);
}
