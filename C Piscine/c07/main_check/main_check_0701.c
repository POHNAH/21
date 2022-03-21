#include <stdio.h>

int	*ft_range(int min, int max);

void	print_array(int *arr, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		printf("%d ", arr[index]);
		++index;
	}
	printf("\n");
}

int	main(void)
{
	printf("ex01\n");
	printf("ft_range(-1, 10) : ");
	print_array(ft_range(-1, 10), 11);
	printf("ft_range(1, 1) : ");
	print_array(ft_range(1, 1), 0);
	printf("ft_range(-6, 6) : ");
	print_array(ft_range(-6, 6), 12);
	printf("ft_range(0, 2) : ");
	print_array(ft_range(0, 2), 2);
	printf("ft_range(100, 150) : ");
	print_array(ft_range(100, 150), 50);
}
