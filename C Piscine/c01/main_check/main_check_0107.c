#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main()
{
	int i;
	int c[10];

	printf("ex07\n");
	
	i = 0;
    printf("Before: ");
	while (i < 10)
	{
		c[i] = i;
		printf("%d ", c[i]);
		i++;
	}
	printf("\n");

	ft_rev_int_tab(&c[0], 10);
	
	i = 0;
    printf("After: ");
    while (i < 10)
    {
		printf("%d ", c[i]);
        i++;
    }
    printf("\n");
}
