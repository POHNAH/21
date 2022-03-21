#include <stdio.h>

int    ft_strlen(char *str);

int main()
{
	int i;

	printf("ex06\n");
	i = ft_strlen("5tgvbhu8ujnbgt67ujhg");
	printf("В первой строке %d символов\n", i);
	i = ft_strlen("");
	printf("Во второй строке %d символов\n", i);
	i = ft_strlen("6нрт тшнп8 шyign98gn8fbn87m8m899999");
	printf("В третьей строке %d символов\n", i);
	i = ft_strlen("1");
	printf("В четвертой строке %d символов\n", i);
	i = ft_strlen("к");
    printf("В пятой строке %d символов\n", i);
}
