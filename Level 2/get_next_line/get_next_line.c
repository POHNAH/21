/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:03:33 by ralfredi          #+#    #+#             */
/*   Updated: 2021/11/09 11:03:36 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	clear(char **clear)
{
	free(*clear);
	*clear = NULL;
}

static char	*ft_strjoin(char *start, char *end)
{
	size_t	i;
	size_t	j;
	char	*buff;

	buff = malloc(strlensybol(start, '\0') + strlensybol(end, '\0') + 1);
	if (buff == NULL)
		return (NULL);
	i = 0;
	while (start[i] != '\0')
	{
		buff[i] = start[i];
		i++;
	}
	j = 0;
	while (end[j] != '\0')
	{
		buff[i] = end[j];
		i++;
		j++;
	}
	buff[i] = '\0';
	free(start);
	return (buff);
}

static void	read_line(char **result, int fd)
{
	char	*buff;
	int		readed_byte;

	if (BUFFER_SIZE < 0)
		return ;
	buff = ft_calloc(BUFFER_SIZE + 1);
	readed_byte = read(fd, buff, BUFFER_SIZE);
	while (readed_byte > 0)
	{
		buff[readed_byte] = '\0';
		if (*result == NULL)
			*result = strcut(buff, '\0', 0);
		else
			*result = ft_strjoin(*result, buff);
		if (ft_strrchr(*result, '\n') != NULL)
			break ;
		readed_byte = read(fd, buff, BUFFER_SIZE);
	}
	if (readed_byte < 0)
		clear(result);
	clear(&buff);
}

char	*get_next_line(int fd)
{
	static char	*result;
	char		*buff;
	char		*res;

	if (fd < 0)
		return (NULL);
	read_line(&result, fd);
	if (result == NULL || result[0] == '\0')
		return (NULL);
	else if (ft_strrchr(result, '\n') != NULL)
	{
		res = strcut(result, '\n', 0);
		buff = strcut(result, '\0', strlensybol(result, '\n') + 1);
		free(result);
		result = buff;
		if (result[0] == '\0')
			clear(&result);
	}
	else
	{
		res = strcut(result, '\0', 0);
		clear(&result);
	}
	return (res);
}
