#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("ex07\n");
	printf("ft_find_next_prime(-1) = %d\n", ft_find_next_prime(-1));
	printf("ft_find_next_prime(0) = %d\n", ft_find_next_prime(0));
	printf("ft_find_next_prime(2) = %d\n", ft_find_next_prime(2));
	printf("ft_find_next_prime(3) = %d\n", ft_find_next_prime(3));
	printf("ft_find_next_prime(4) = %d\n", ft_find_next_prime(4));
	printf("ft_find_next_prime(6) = %d\n", ft_find_next_prime(6));
	printf("ft_find_next_prime(8) = %d\n", ft_find_next_prime(8));
	printf("ft_find_next_prime(12) = %d\n", ft_find_next_prime(12));
	printf("ft_find_next_prime(14) = %d\n", ft_find_next_prime(14));
	printf("ft_find_next_prime(18) = %d\n", ft_find_next_prime(18));
	printf("ft_find_next_prime(20) = %d\n", ft_find_next_prime(20));
	printf("ft_find_next_prime(24) = %d\n", ft_find_next_prime(24));
	printf("ft_find_next_prime(40) = %d\n", ft_find_next_prime(40));
	printf("ft_find_next_prime(996) = %d\n", ft_find_next_prime(996));
	printf("ft_find_next_prime(998) = %d\n", ft_find_next_prime(998));
}
