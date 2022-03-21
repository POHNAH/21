#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	s1[20] = "Hi! ";
	char	s2[20] = "Hi! ";

	printf("ex03\n");
	printf("my: Hi! : %s\n", s1);
	printf("strcat :Hi! : %s\n\n", s2);
	printf("my: Hi! Piece :%s\n", ft_strncat(s1, "Piece ", 3));
	printf("strcat :Hi! Piece :%s\n\n", strncat(s2, "Piece ", 3));
	printf("my: Hi! Piece of :%s\n", ft_strncat(s1, "of ", 2));
	printf("strcat :Hi! Piece of :%s\n\n", strncat(s2, "of ", 2));
	printf("my: Hi! Piece of meat! :%s\n", ft_strncat(s1, "meat! ", 3));
	printf("strcat :Hi! Piece of meat! :%s\n\n", strncat(s2, "meat! ", 3));
	printf("my: Hi! Piece of meat! AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA:"
		" %s\n", ft_strncat(s1, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 20));
	printf("strcat :Hi! Piece of meat! AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
		"AAAAAA: %s\n",
		strncat(s2, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 20));
}
