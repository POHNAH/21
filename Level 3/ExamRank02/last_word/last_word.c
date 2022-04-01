#include <unistd.h>

int	ft_isspace(char c)
{
	if ('\n' == c || '\t' == c || '\v' == c || '\f' == c || ' ' == c
		|| '\r' == c)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*(str + index))
		++index;
	return (index);
}

int	main(int argc, char **argv)
{
	int		index;
	int		index_buf;
	int		len;
	char	buf[100000];

	if (2 == argc)
	{
		index = ft_strlen(argv[1]) - 1;
		while (1 == ft_isspace(argv[1][index]))
			--index;
		len = 0;
		while (0 == ft_isspace(argv[1][index]) && index > -1)
		{
			++len;
			--index;
		}
		if (len > 0)
		{
			++index;
			index_buf = 0;
			while (0 == ft_isspace(argv[1][index + index_buf])
				&& len - index_buf > 0)
			{
				buf[index_buf] = argv[1][index + index_buf];
				++index_buf;
			}
			write(1, buf, len);
		}
	}
	write(1, "\n", 1);
	return (0);
}
