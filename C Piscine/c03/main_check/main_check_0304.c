#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	// ETO ZAGOTOVKA, NADO REALIZOVIVAT
	printf("ex04\n");
	printf("my: Hi! : %s\n", ft_strstr("Hi"));
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
