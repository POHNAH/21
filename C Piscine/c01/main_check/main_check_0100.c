#include <stdio.h>

void ft_ft(int *nbr);

int	main()
{
	int i = 7;

	printf("ex00\n");
	printf("i = %d\n", i);
	ft_ft(&i);
	printf("i = %d\n", i);
}
