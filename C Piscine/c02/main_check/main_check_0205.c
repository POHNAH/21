#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("ex04\n");
	printf("Only uppercase %d\n", ft_str_is_uppercase("ZZZJHGHJG"));
	printf("Not only uppercase %d\n", ft_str_is_uppercase("8nmb6f5ngnt"));
	printf("Space %d\n", ft_str_is_uppercase(" "));
	printf("Empty %d\n", ft_str_is_uppercase(""));
}
