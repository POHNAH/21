#include <stdlib.h>

int	ft_isspace(char c)
{
	if ('\n' == c || '\t' == c || '\v' == c || '\f' == c || ' ' == c
		|| '\r' == c)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*(str + index))
		++index;
	return (index);
}

char	**ft_split(char *str)
{
	char	**result;
	int		size;
	int		index;
	int		len;
	int		len_word;

	index = 0;
	len = 0;
	while (*(str + index))
	{
		if (1 == ft_isspace(*(str + index)) && len > 0)
			len = 0;
		if (0 == ft_isspace(*(str + index)) && len == 0)
		{
			len = 1;
			++size;
		}
		++index;
	}
	size += len;
	if (0 == size)
	{
		result = (char **) malloc(sizeof(char *) * 1);
		result[0] = NULL;
		return (result);
	}
	result = (char **) malloc(sizeof(char *) * size);
	index = 0;
	size = 0;
	while (*(str + index))
	{
		if (0 == ft_isspace(*(str + index)))
		{
			len = 0;
			while (0 == ft_isspace(*(str + index + len))
				&& *(str + index + len))
				++len;
			len_word = len;
			result[size] = malloc(len);
			result[size][len] = '\0';
			--len;
			while (len > -1)
			{
				result[size][len] = *(str + index + len);
				--len;
			}
			++size;
			index += (len_word - 1);
		}
		++index;
	}
	result[size] = NULL;
	return (result);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	**test;
//	int		index;
//
//	test = ft_split("31234234 1241 2545 125 4 fdfg etg re   ef egffv 4g "
//			"tgwrf w3 dsfji\tskjdjhfk ");
//	index = 0;
//	while (NULL != test[index])
//	{
//		printf("test[%d] = \"%s\"\n", index, test[index]);
//		++index;
//	}
//	return (0);
//}
