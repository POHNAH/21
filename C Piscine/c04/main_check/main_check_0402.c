#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	write(1, "ex02\n", 5);
	printf("Здесь быдет цыфра -2147483648:\n");
	ft_putnbr(-2147483648);
	printf("\nЗдесь быдет цыфра -1234:\n");
	ft_putnbr(-1234);
	printf("\nЗдесь быдет цыфра 0:\n");
	ft_putnbr(0);
	printf("\nЗдесь быдет цыфра 4321:\n");
	ft_putnbr(4321);
	printf("\nЗдесь быдет цыфра 2147483647:\n");
	ft_putnbr(2147483647);
}
