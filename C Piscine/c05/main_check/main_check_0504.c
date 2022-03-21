#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	i;

	printf("ex04\n");
	i = 0;
	while (i < 50)
	{
		printf("Fibonachi number for %d = %d\n", i, ft_fibonacci(i));
		++i;
	}
}
