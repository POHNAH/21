#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("ex04\n");
	printf("Only lowercase %d\n", ft_str_is_lowercase("vergergerger"));
	printf("Not only lowercase %d\n", ft_str_is_lowercase("8nmb6f5ngnt"));
	printf("Space %d\n", ft_str_is_lowercase(" "));
	printf("Empty %d\n", ft_str_is_lowercase(""));
}
