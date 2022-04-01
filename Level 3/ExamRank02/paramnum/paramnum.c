#include <unistd.h>

void	ft_itoa_lite(int n)
{
	char	c;

	if (n / 10 > 0)
		ft_itoa_lite(n / 10);
	c = '0' + n % 10;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "0\n", 2);
	else
	{
		if (argv[1])
			argv[1] = argv[1];
		ft_itoa_lite(argc - 1);
		write(1, "\n", 1);
	}
	return (0);
}
