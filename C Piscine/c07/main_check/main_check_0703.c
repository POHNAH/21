#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[] = {"Hi!", "piece", "of", "meat", "!!!"};
	char	sep[] = "__";

	printf("ex03\n");
	printf("ft_strjoin(5, {\"Hi\", \"piece\", \"of\", \"meat\", \"!!!\"},"
		" \"&&&\"): %s\n", ft_strjoin(5, strs, sep));
}
