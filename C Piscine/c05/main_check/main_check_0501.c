#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	i;

	printf("ex01\n");
	i = -1;
	while (i < 40)
	{
		printf("Factorial %d = %d\n", i, ft_recursive_factorial(i));
		++i;
	}
}
