void	ft_swap(int *a, int *b)
{
	if (0 == *a && 0 == *b)
		return ;
	else if (0 == *a)
	{
		*a = *b;
		*b = 0;
	}
	else if (0 == *b)
	{
		*b = *a;
		*a = 0;
	}
	else
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
	}
}
