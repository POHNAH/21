#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
    int x = 9;
    int y = 7;
	printf("ex04\n");
	printf("x = %d, y = %d\n", x, y);
    ft_ultimate_div_mod(&x, &y);
    printf("x = %d, y = %d\n", x, y);
}
