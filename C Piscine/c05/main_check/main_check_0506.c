#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	i;

	printf("ex06\n");
	i = -1;
	while (i < 1000)
	{
		printf("ft_is_prime(%d) ? %d\n", i, ft_is_prime(i));
		++i;
	}
}
