#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
    int i;
    int c[10];

    printf("ex08\n");

    i = 0;
	while (i < 10)
    {
        c[i] = 10 - i;
		i++;
    }

	printf("Before: ");
	i = 0;
    while (i < 10)
    {
		printf("%d ", c[i]);
        i++;
    }
    printf("\n");

    ft_sort_int_tab(&c[0], 10);

    i = 0;
    printf("After: ");
    while (i < 10)
    {
		printf("%d ", c[i]);
        i++;
    }
    printf("\n");
}
