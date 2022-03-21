#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*(str + index))
		++index;
	return (index);
}

#include <stdio.h>
int	add_char(char c, char **line, int count)
{
	char	*result;
	int		len;

	if (count == 0)
	{
		printf("add 0 0\n");
		result = (char *) malloc(2);
		if (NULL == result)
			return (-1);
		*result = c;
		*(result + 1) = '\0';
		printf("add 0 1\n");
		printf("result = %s, *line = %s\n", result, *line);
	}
	else
	{
		len = ft_strlen(*line) + 2;
		result = (char *) malloc(len);
		if (NULL == result)
		{
			return (-1);
		}
		printf("add 1 0\n");
		printf("len = %d\n", len);
		--len;
		*(result + len) = '\0';
		--len;
		*(result + len) = c;
		printf("add 1 1\n");
		printf("result + len = %s, len = %d\n", result + len, len);
		while (len > 0)
		{
			printf("add 2 0\n");
			printf("result + len = %s, len = %d\n", result + len, len);
			--len;
			printf("*(result + len) = %c, *(*line + len) = %c\n", *(result + len), *(*line + len));
			*(result + len) = *(*line + len);
			printf("*(result + len) = %c, *(*line + len) = %c\n", *(result + len), *(*line + len));
			printf("result + len = %s, len = %d\n", result + len, len);
		}
	}
	printf("add 2 0\n");
	printf("result = %s, *line = %s\n", result, *line);
	free(*line);
	printf("add 2 1\n");
	printf("result = %s, *line = %s\n", result, *line);
	*line = result;
	printf("add 2 2\n");
	printf("result = %s, *line = %s\n", result, *line);
	return (0);
}

int	get_next_line(char **line)
{
	char	c;
	int		count;

	c = '\0';
	count = -1;
	*line = malloc(1);
	printf("gnl 1\n");
	while (read(0, &c, 1) != -1)
	{
		++count;
		printf("gnl 2 %d\n", count);
		if (c == '\n')
			break ;
		printf("gnl 3 %d\n", count);
		if (add_char(c, line, count) == -1)
		{
			count = -2;
			break ;
		}
	}
	printf("gnl 4\n");
	read(0, &c, 1);
	if (count == -1 || count == 0)
	{
		free(*line);
		if (count == 0)
		{
			*line = (char *) malloc(1);
			**line = '\0';
			return (0);
		}
		else
			return (-1);
	}
	else if (count == -2)
		return (1);
	return (0);
}

int	main()
{
	int		res;
	char	*result;

	res = get_next_line(&result);
	printf("res = %d, result = %s\n", res, result);
	return (0);
}
