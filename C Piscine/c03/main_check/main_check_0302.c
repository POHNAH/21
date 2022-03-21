#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	s1[20] = "Hi! ";
	char	s2[20] = "Hi! ";

	printf("ex02\n");
	printf("my: Hi! : %s\n", s1);
	printf("strcat :Hi! : %s\n\n", s2);
	printf("my: Hi! Piece :%s\n", ft_strcat(s1, "Piece "));
	printf("strcat :Hi! Piece :%s\n\n", strcat(s2, "Piece "));
	printf("my: Hi! Piece of :%s\n", ft_strcat(s1, "of "));
	printf("strcat :Hi! Piece of :%s\n\n", strcat(s2, "of "));
	printf("my: Hi! Piece of meat! :%s\n", ft_strcat(s1, "meat! "));
	printf("strcat :Hi! Piece of meat! :%s\n\n", strcat(s2, "meat! "));
	printf("my: Hi! Piece of meat! AAAAAAAAAAAAA: %s\n",
		ft_strcat(s1, "AAAAAAAAAAAAA"));
	printf("strcat :Hi! Piece of meat! AAAAAAAAAAAAA: %s\n",
		strcat(s2, "AAAAAAAAAAAAA"));
}
