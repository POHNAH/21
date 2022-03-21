#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	write(1, "ex05\n", 5);
	printf("ft_atoi_base number .~B~7 , base: ~./7B :%d, verno: 728\n\n",
		ft_atoi_base(".~B~7", "~./7B"));
	printf("ft_atoi_base number 1010 , base: 01 :%d, verno: 10\n\n",
		ft_atoi_base("1010", "01"));
	printf("ft_atoi_base number -cr4f4 , base: 4fcdr :%d, verno: -1755\n\n",
		ft_atoi_base("-cr4f4", "4fcdr"));
	printf("ft_atoi_base number -fddrrccdrdr4rd , base: 4fcdr :%d, verno:"
		" -2147483648\n\n", ft_atoi_base("-fddrrccdrdr4rd", "4fcdr"));
	printf("ft_atoi_base number NONNONOOONONNDODONDN , base: DNO :%d, verno:"
		" 2147483647\n\n", ft_atoi_base("NONNONOOONONNDODONDN", "DNO"));
}
