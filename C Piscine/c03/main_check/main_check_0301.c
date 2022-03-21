#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("ex01\n");
	printf("my 5 letter: vnosdmvoimrjoivs > vnosdmvoimrjoivS :%d\n",
		ft_strncmp("vnosdmvoimrjoivs", "vnosdmvoimrjoivS", 5));
	printf("strcmp 5 letter: vnosdmvoimrjoivs > vnosdmvoimrjoivS :%d\n\n",
		strncmp("vnosdmvoimrjoivs", "vnosdmvoimrjoivS", 5));
	printf("my 16 letter: vnosdmvoimrjoivs > vnosdmvoimrjoivS :%d\n",
		ft_strncmp("vnosdmvoimrjoivs", "vnosdmvoimrjoivS", 16));
	printf("strcmp 16 letter: vnosdmvoimrjoivs > vnosdmvoimrjoivS :%d\n\n",
		strncmp("vnosdmvoimrjoivs", "vnosdmvoimrjoivS", 16));
	printf("my 5 letter: GGGHHHHJHBJB < ggghhhhjhbjb :%d\n",
		ft_strncmp("GGGHHHHJHBJB", "ggghhhhjhbjb", 5));
	printf("strcmp 5 letter: GGGHHHHJHBJB < ggghhhhjhbjb :%d\n\n",
		strncmp("GGGHHHHJHBJB", "ggghhhhjhbjb", 5));
	printf("my 5 letter: 111111 = 111111 :%d\n",
		ft_strncmp("111111", "111111", 5));
	printf("strcmp 5 letter: 111111 = 111111 :%d\n\n",
		strncmp("111111", "111111", 5));
	printf("my 5 letter: aAbB < aaBB :%d\n", ft_strncmp("aAbB", "aaBB", 5));
	printf("strcmp 5 letter: aAbB < aaBB :%d\n\n", strncmp("aAbB", "aaBB", 5));
	printf("strcmp 5 letter: aAbB > a :%d\n", strncmp("aAbB", "a", 5));
	printf("my 5 letter: aAbB > a :%d\n\n", ft_strncmp("aAbB", "a", 5));
	printf("strcmp 5 letter: a < adterf :%d\n", strncmp("a", "adterf", 5));
	printf("my 5 letter: a < adterf :%d\n\n", ft_strncmp("a", "adterf", 5));
	printf("my 5 letter: <empty> = <empty> :%d\n", ft_strncmp("", "", 5));
	printf("strcmp 5 letter: <empty> = <empty> :%d\n", strncmp("", "", 5));
}
