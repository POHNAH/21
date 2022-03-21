#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	write(1, "ex03\n", 5);
	printf(">>>>my atoi \"-2147483648\": %d\n", ft_atoi("-2147483648"));
	printf("atoi \"-2147483648\": %d\n\n", atoi("-2147483648"));
	printf(">>>>my atoi \"-214748364899999999\": %d\n",
		ft_atoi("-214748364899999999"));
	printf("atoi \"-214748364899999999\": %d\n\n", atoi("-214748364899999999"));
	printf(">>>>my atoi \"2147483647\": %d\n", ft_atoi("2147483647"));
	printf("atoi \"2147483647\": %d\n\n", atoi("2147483647"));
	printf(">>>>my atoi \"214748364777777777777\": %d\n",
		ft_atoi("214748364777777777777"));
	printf("atoi \"214748364777777777777\": %d\n\n", atoi("214748364777777777777"));
	printf(">>>>my atoi \"sdf dfgsd gdfg--23---\": %d\n",
		ft_atoi("sdf dfgsd gdfg--23---"));
	printf("atoi \"sdf dfgsd gdfg--23---\": %d\n\n",
		atoi("sdf dfgsd gdfg--23---"));
	printf(">>>>my atoi \"sdf dfgsd gdfg---32---\": %d\n",
		ft_atoi("sdf dfgsd gdfg---32---"));
	printf("atoi \"sdf dfgsd gdfg---32---\": %d\n\n",
		atoi("--------32---"));
	printf(">>>>my atoi \"          ---32---\": %d\n",
		ft_atoi("          ---32---"));
	printf("atoi \"          ---32---\": %d\n\n",
		atoi("          ---32---"));
	printf(">>>>my atoi \"          --+----22---\": %d\n",
		ft_atoi("          --+----22---"));
	printf("atoi \"          --+----22---\": %d\n\n",
		atoi("          --+----22---"));
	printf(">>>>my atoi \"\": %d\n", ft_atoi(""));
	printf("atoi \"\": %d\n\n", atoi(""));
	printf(">>>>my atoi \"  \\n\\t\\r\\v\\f-7\": %d\n", ft_atoi(" \n\t\r\v\f-7"));
	printf("atoi \"  \\n\\t\\r\\v\\f-7\": %d\n\n", atoi(" \n\t\r\v\f-7"));
}
