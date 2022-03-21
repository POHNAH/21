#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void print_bytes(void *ptr, int size) 
{
    unsigned char *p = ptr;
    int i;
    for (i=0; i<size; i++) {
        printf("%02hhX ", p[i]);
    }
    printf("\n");
}

int	main(void)
{
	char	*s = NULL;
	char	s1[] = {"012345678901234"};
	char	s2[20];

	printf("ex01\n");
	printf("String src: %s\n", s1);
	s = ft_strncpy(s2, s1, 10);
	printf("10 char: %s\n", s);
	print_bytes(s, 10);
	printf("10 char s2: %s\n", s2);
	print_bytes(s2, 10);
	
	s = strncpy(s2, s1, 10);
	printf("10 char strcopy: %s\n", s);
	print_bytes(s, 10);
	printf("10 char s2 strcopy: %s\n", s2);
	print_bytes(s2, 10);
	printf("\n");

	s = ft_strncpy(s2, s1, 20);
	printf("20 char: %s\n", s);
	print_bytes(s, 20);
	printf("20 char s2: %s\n", s2);
	print_bytes(s2, 20);
	s = strncpy(s2, s1, 20);
	printf("20 char strcopy: %s\n", s);
	print_bytes(s, 20);
	printf("20 char s2 strcopy: %s\n", s2);
	print_bytes(s2, 20);
	printf("\n");

	s = ft_strncpy(s2, s1, 5);
	printf("5 char: %s\n", s);
	print_bytes(s, 5);
	printf("5 char s2: %s\n", s2);
	print_bytes(s2, 5);

	s = strncpy(s2, s1, 5);
	printf("5 char strcopy: %s\n", s);
	print_bytes(s, 5);
	printf("5 char s2 strcopy: %s\n", s2);
	print_bytes(s2, 5);
	printf("\n");

	s = ft_strncpy(s2, s1, 1);
	printf("1 char: %s\n", s);
	print_bytes(s, 1);
	printf("1 char s2: %s\n", s2);
	print_bytes(s2, 1);

	s = strncpy(s2, s1, 1);
	printf("1 char strcopy: %s\n", s);
	print_bytes(s, 1);
	printf("1 char s2 strcopy: %s\n", s2);
	print_bytes(s2, 1);
}
