#include <stdio.h>

void	ft_swap(int *a, int *b);

int main()
{
	int x = 10;
	int y = 5;

	printf("ex03\n");
	printf("x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);
}
