#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("ex00\n");
	printf("my: vnosdmvoimrjoivs > vnosdmvoimrjoivS: %d\n",
		ft_strcmp("vnosdmvoimrjoivs", "vnosdmvoimrjoivS"));
	printf("strcmp: vnosdmvoimrjoivs > vnosdmvoimrjoivS: %d\n\n",
		strcmp("vnosdmvoimrjoivs", "vnosdmvoimrjoivS"));
	printf("my: GGGHHHHJHBJB < ggghhhhjhbjb: %d\n",
		ft_strcmp("GGGHHHHJHBJB", "ggghhhhjhbjb"));
	printf("strcmp: GGGHHHHJHBJB < ggghhhhjhbjb: %d\n\n",
		strcmp("GGGHHHHJHBJB", "ggghhhhjhbjb"));
	printf("my: 111111 = 111111: %d\n", ft_strcmp("111111", "111111"));
	printf("strcmp: 111111 = 111111: %d\n\n", strcmp("111111", "111111"));
	printf("my: aAbB < aaBB: %d\n", ft_strcmp("aAbB", "aaBB"));
	printf("strcmp: aAbB < aaBB: %d\n\n", strcmp("aAbB", "aaBB"));
	printf("strcmp: aAbB > a: %d\n", strcmp("aAbB", "a"));
	printf("my: aAbB > a: %d\n\n", ft_strcmp("aAbB", "a"));
	printf("strcmp: a < adterf: %d\n", strcmp("a", "adterf"));
	printf("my: a < adterf: %d\n\n", ft_strcmp("a", "adterf"));
	printf("my: <empty> = <empty>: %d\n", ft_strcmp("", ""));
	printf("strcmp: <empty> = <empty>: %d\n", strcmp("", ""));
}
