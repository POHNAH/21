#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("ex02\n");
	printf("Only letter %d\n", ft_str_is_alpha("uyiygUIGJIUihbim"));
	printf("Not only letter %d\n", ft_str_is_alpha("8nmb6f5ngnt"));
	printf("Space %d\n", ft_str_is_alpha(" "));
	printf("Empty %d\n", ft_str_is_alpha(""));
}
