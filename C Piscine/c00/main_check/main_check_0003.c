#include <unistd.h>

void ft_print_numbers(void);

int	main()
{
	write(1, "ex03\n", 5);
	ft_print_numbers();
}
