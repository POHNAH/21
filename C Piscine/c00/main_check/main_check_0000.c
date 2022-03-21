#include <unistd.h>

void ft_putchar(char c);

int	main()
{
	int i;
	char c;

	write(1, "ex00\n", 5);
	for(i = 40; i < 60; i++)
	{
		c = i;
		ft_putchar(c);
		ft_putchar(' ');
	}
	ft_putchar('\n');
}
