#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("ex03\n");
	printf("Only numbers %d\n", ft_str_is_numeric("3456789"));
	printf("Not only numbers %d\n", ft_str_is_numeric("8nmb6f5ngnt"));
	printf("Space %d\n", ft_str_is_numeric(" "));
	printf("Empty %d\n", ft_str_is_numeric(""));
}
