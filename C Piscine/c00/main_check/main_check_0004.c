#include <unistd.h>

void ft_is_negative(int n);

int	main()
{
	write(1, "ex04\n", 5);
	ft_is_negative(5);
	ft_is_negative(-5);
	ft_is_negative(0);
}
