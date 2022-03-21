/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:04:17 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/09 11:04:19 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	strlensybol(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

void	*ft_calloc(size_t len)
{
	char	*result;

	result = malloc(len + 1);
	if ((void *)0 == result)
		return ((void *)0);
	while (len + 1 != 0)
		result[len--] = '\0';
	return (result);
}

char	*ft_strdup(const char *s)
{
	int		index;
	char	*result;

	index = 0;
	result = malloc(strlensybol(s, '\0') + 1);
	if ((void *) 0 == result)
		return ((void *) 0);
	while (*(s + index) != '\0')
	{
		*(result + index) = *(s + index);
		++index;
	}
	*(result + index) = *(s + index);
	return (result);
}

char	*strcut(char *s1, char x, size_t start)
{
	char	*s2;
	size_t	buff;
	int		i;

	buff = start;
	if (s1 == NULL)
		return (NULL);
	while (s1[start] != x)
		start++;
	if (s1[start] == '\0')
		start--;
	s2 = ft_calloc(start - buff + 1);
	if (s2 == NULL)
		return (NULL);
	i = start - buff;
	while (start + 1 != buff)
	{
		s2[i] = s1[start];
		start--;
		i--;
	}
	return (s2);
}

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	int		len;
	char	ch;

	len = strlensybol(s, '\0');
	index = len;
	ch = c;
	if (ch == 0)
		return ((char *)(s + len));
	while (index > -1)
	{
		if (*(s + index) == ch)
			return ((char *)(s + index));
		--index;
	}
	return ((void *) 0);
}
