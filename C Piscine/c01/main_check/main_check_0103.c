#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int x = 52;
	int y = 5;
	int c, z;
	printf("ex03\n");
	printf("x = %d, y = %d\n", x, y);
	ft_div_mod(x, y, &c, &z);
	printf("div = %d, mod = %d\n", c, z);
}
