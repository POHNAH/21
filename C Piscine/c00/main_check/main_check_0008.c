#include <unistd.h>

void ft_print_combn(int n);

int	main()
{
	char c;

	write(1, "ex08\n", 5);
	write(1, "comb1 ===> ", 11);
	ft_print_combn(1);
	read(0, &c, 1);

	write(1, "comb2 ===> ", 11);
	ft_print_combn(2);
	read(0, &c, 1);
	
	write(1, "comb3 ===> ", 11);
	ft_print_combn(3);
}
