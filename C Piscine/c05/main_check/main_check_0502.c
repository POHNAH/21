#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("ex02\n");
	printf("2 ^ 10 = %d\n", ft_iterative_power(2, 10));
	printf("-1 ^ -1 = %d\n", ft_iterative_power(-1, -1));
	printf("-1 ^ -2 = %d\n", ft_iterative_power(-1, -2));
	printf("-1 ^ -3 = %d\n", ft_iterative_power(-1, -3));
	printf("-1 ^ -4 = %d\n", ft_iterative_power(-1, -4));
	printf("0 ^ 0 = %d\n", ft_iterative_power(0, 0));
	printf("0 ^ 10 = %d\n", ft_iterative_power(0, 10));
	printf("2 ^ -5 = %d\n", ft_iterative_power(2, -5));
	printf("-5 ^ 3 = %d\n", ft_iterative_power(-5, 3));
	printf("10 ^ 5 = %d\n", ft_iterative_power(10, 5));
}
