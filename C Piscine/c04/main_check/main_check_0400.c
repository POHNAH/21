#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	i;

	printf("ex00\n");
	i = ft_strlen("5tgvbhu8ujnbgt67ujhg");
	printf("В строке \"5tgvbhu8ujnbgt67ujhg\" %d символов\n", i);
	i = ft_strlen("");
	printf("Во строке \"\" %d символов\n", i);
	i = ft_strlen("6нрт тшнп8 шyign98gn8fbn87m8m899999");
	printf("В строке \"6нрт тшнп8 шyign98gn8fbn87m8m899999\" %d символов\n", i);
	i = ft_strlen("1");
	printf("В строке \"1\" %d символов\n", i);
	i = ft_strlen("к");
	printf("В строке \"к\" %d символов\n", i);
}
