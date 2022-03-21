#include <unistd.h>

int	check_char(char c, char *str)
{
	int	index;

	index = 0;
	while (*(str + index))
	{
		if (*(str + index) == c)
			return (index);
		++index;
	}
	return (-1);
}

void	do_inter(char *str1, char *str2)
{
	int	index;

	index = 0;
	while (*(str1 + index))
	{
		if (check_char(*(str1 + index), str1) == index
			&& check_char(*(str1 + index), str2) > -1)
			write(1, str1 + index, 1);
		++index;
	}
}

int	main(int argc, char **argv)
{
	if (3 == argc)
		do_inter(*(argv + 1), *(argv + 2));
	write(1, "\n", 1);
	return (0);
}
