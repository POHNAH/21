#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("ex04\n");
	printf("Only printable %d\n", ft_str_is_printable("v4v4ZZZJHGHJG"));
	printf("Not only printable %d\n", ft_str_is_printable("8\nmb6f5ngnt"));
	printf("Space %d\n", ft_str_is_printable(" "));
	printf("Empty %d\n", ft_str_is_printable(""));
}
