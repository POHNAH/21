#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	i;

	printf("ex05\n");
	i = -1;
	while (i < 145)
	{
		printf("ft_sqrt(%d) = %d\n", i, ft_sqrt(i));
		++i;
	}
}
