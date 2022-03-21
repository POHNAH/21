#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char	s1[] = {"b7n8m8"};
	char*	s;

	printf("ex00\n");
	s = ft_strcpy("", s1);
	printf("%s\n", s);
}
