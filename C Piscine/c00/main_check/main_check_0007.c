#include <unistd.h>

void ft_putnbr(int nb);

int	main()
{
	write(1, "ex07\n", 5);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-1234);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(4321);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
}
