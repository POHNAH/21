#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

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
	int	*num;

	printf("ex02\n");
	printf("ft_ultimate_range(-1, 10) = %d : ",
		ft_ultimate_range(&num, -1, 10));
	print_array(num, 11);
	printf("ft_ultimate_range(0, 1) = %d : ", ft_ultimate_range(&num, 0, 1));
	print_array(num, 1);
	printf("ft_ultimate_range(1, 1) = %d : ", ft_ultimate_range(&num, 1, 1));
	print_array(num, 0);
	printf("ft_ultimate_range(-6, 6) = %d : ", ft_ultimate_range(&num, -6, 6));
	print_array(num, 12);
	printf("ft_ultimate_range(0, 2) = %d : ", ft_ultimate_range(&num, 0, 2));
	print_array(num, 2);
	printf("ft_ultimate_range(100, 150) = %d : ",
		ft_ultimate_range(&num, 100, 150));
	print_array(num, 50);
}
