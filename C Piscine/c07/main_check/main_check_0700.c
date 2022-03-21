#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	printf("ex00\n");
	printf("ft_strdup(\"b5685vbni7gmbygtbb\") return: %s\n",
		ft_strdup("b5685vbni7gmbygtbb"));
	printf("ft_strdup(\"3fc43c3\") return: %s\n", ft_strdup("3fc43c3"));
	printf("ft_strdup(\"\") return: %s\n", ft_strdup(""));
	printf("ft_strdup(\"ncv398hff,\") return: %s\n",
		ft_strdup("ncv398hff,"));
	printf("ft_strdup(\" . . .. < , <<<<>>>>>> <<<,,,,,\") return: %s\n",
		ft_strdup(" . . .. < , <<<<>>>>>> <<<,,,,,"));
}
