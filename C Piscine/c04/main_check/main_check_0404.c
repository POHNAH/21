#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	write(1, "ex04\n", 5);
	printf("ft_putnbr_base int: 728, base: ~./7B\n");
	ft_putnbr_base(728, "~./7B");
	printf("\n.~B~7 <====== VERNO\n");
	printf("\nft_putnbr_base int: 10, base: 01\n");
	ft_putnbr_base(10, "01");
	printf("\n1010 <====== VERNO\n");
	printf("\nft_putnbr_base int: -1755, base: 4fcdr\n");
	ft_putnbr_base(-1755, "4fcdr");
	printf("\n-cr4f4 <====== VERNO\n");
	printf("\nft_putnbr_base int: -2147483648, base: 4fcdr\n");
	ft_putnbr_base(-2147483648, "4fcdr");
	printf("\n-fddrrccdrdr4rd <====== VERNO\n");
	printf("\nft_putnbr_base int: 2147483647, base: DNO\n");
	ft_putnbr_base(2147483647, "DNO");
	printf("\nNONNONOOONONNDODONDN <====== VERNO\n");
	printf("\nft_putnbr_base int: 2147483647, base: \"\"\n");
	ft_putnbr_base(2147483647, "");
	printf("\n <====== VERNO\n");
	printf("\nft_putnbr_base int: 2147483647, base: \"1\"\n");
	ft_putnbr_base(2147483647, "1");
	printf("\n <====== VERNO\n");
}
