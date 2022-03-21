/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:05:05 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/19 20:50:47 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_header.h"

int	size_of_array(char *arr[])
{
	int	i;

	i = 0;
	while (1)
	{
		if (ft_strcmp(*(arr + i), "") != 0)
			return (i - 1);
		++i;
	}
}

int	getnum(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');

	return (-1);
}

#include <stdio.h>

int	finde_array(int *array, int size, int nbr)
{
	int	i;

	i = 0;
	printf("finde_array 1\nsize = %d, i = %d, nbr = %d\n", size, i, nbr);
	while (i < size)
	{
		printf("finde_array 2\nsize = %d, i = %d, arr = %d, nbr = %d\n", size, i, *(array + i), nbr);
		if (*(array + i) == nbr)
			return (i);
		++i;
	}
	printf("finde_array 3\nsize = %d, i = %d, arr = %d\n", size, i, *(array + i));
	return (-1);
}

char	*hundreds(int n, int size, int *NUM, char *NUM_NAME[])
{
	char	*buf;
	int		i;

	buf = (char *) malloc(sizeof(char) * 1024);
	*buf = '\0';
	if (n > 0)
	{
		i = finde_array(NUM, size, n);
		buf = ft_strcat(buf, *(NUM_NAME + i));
		buf = ft_strcat(buf, " ");
	}
	return (buf);
}

char	*tens(int n, int size, int *NUM, char *NUM_NAME[])
{
	char	*buf;
	int		i;

	buf = (char *) malloc(sizeof(char) * 1024);
	*buf = '\0';
	printf("tens 1\n");
	if (n > 19)
	{
		printf("tens 2\n");
		i = finde_array(NUM, size, (n / 10) * 10);
		printf("tens 2-1, i = %d\n", i);
		buf = ft_strcat(buf, *(NUM_NAME + i));
		printf("tens 2-2\n");
		buf = ft_strcat(buf, " ");
		if (n % 10 > 0)
		{
			printf("tens 3\n");
			i = finde_array(NUM, size,  n % 10);
			buf = ft_strcat(buf, *(NUM_NAME + i));
			buf = ft_strcat(buf, " ");
		}
	}
	else if (n > 0)
	{
		printf("tens 4\n");
		i = finde_array(NUM, size, n);
		buf = ft_strcat(buf, *(NUM_NAME + i));
		buf = ft_strcat(buf, " ");
	}
	printf("tens 1\n");
	return (buf);
}

char	*is_tripl_ok(char *str, int *NUM, char *NUM_NAME[])
{
	char	*buf;
//	int		size_arr;

//	size_arr = size_of_array(NUM_NAME);
	printf("is_tripl_ok 1\n");
	buf = ft_strcat("", hundreds(getnum(*str), SIZE, NUM, NUM_NAME));
	printf("is_tripl_ok 2\n");
	buf = ft_strcat(buf, tens(getnum(*(str + 1)) * 10
		+ getnum(*(str + 2)), SIZE, NUM, NUM_NAME));
	printf("is_tripl_ok 3\n");
	return (buf);
}

char	*pars_tripl(char *str, int thous, int *NUM, char *NUM_NAME[],
			char *THOUSAND[])
{
	char	*buf;

	buf = (char *) malloc(sizeof(char) * 1024);
	*buf = '\0';
	printf("pars_tripl 1\n");
	if (ft_strlen(str) != 3)
		ft_putstr("ERROR: Numbers doesn'n correct.\n");
	else
	{
		printf("pars_tripl 2\n");
		buf = is_tripl_ok(str, NUM, NUM_NAME);
	}
	printf("pars_tripl 3\n");
	if (ft_strlen(buf) > 0 && thous > 0)
	{
		buf = ft_strcat(buf, *(THOUSAND + thous));
		buf = ft_strcat(buf, " ");
	}
	printf("pars_tripl 4\n");
	return (buf);
}

void	write_number(char *str, int *NUM, char *NUM_NAME[], char *THOUSAND[])
{
	int		len;
	char	*result;
	char	*buf;

	len = ft_strlen(str);
	buf = "";
	printf("write_number 1\n");
	if (len % 3 == 2)
	{
		buf = ft_strncat(buf, "0", 1);
		buf = ft_strncat(buf, ft_strncpy(str, len % 3), len % 3);
	}
	else if (len % 3 == 1)
	{
		buf = ft_strncat(buf, "00", 2);
		buf = ft_strncat(buf, ft_strncpy(str, len % 3), len % 3);
	}
	printf("write_number 2\n");
	len -= len % 3;
	printf("write_number 4\n");
	str = ft_strntail(str, len);
	printf("write_number 5\n");
	result = pars_tripl(buf, len / 3, NUM, NUM_NAME, THOUSAND);
	printf("write_number 6\n");
	while (len > 0)
	{
		printf("write_number 7\n");
		buf = ft_strncat(buf, ft_strncpy(str, 3),3);
		len -= 3;
		str = ft_strntail(str, len);
		result = ft_strcat(result, pars_tripl(buf, len / 3, NUM, NUM_NAME,
			THOUSAND));
	}
	printf("write_number 8\n");
	if (ft_strlen(result) > 0)
		ft_putstr(result);
	else
		ft_putstr(NUM_NAME[finde_array(NUM, 40, 0)]);
}

int main(int argc, char *argv[])
{
	int		NUM[1000];
	char	**NUM_NAME;
	char	**THOUSAND;

	argv[1] = "0";
	if (argc < 2 || argc > 3)
		ft_putstr("Arguments doesn'n correct.\n");
	else if (check_arguments() == 0)
	{
		printf("main 5\n");
		if (read_dic("numbers.dict", NUM, &NUM_NAME, &THOUSAND) != 0)
			ft_putstr("Dictionary error.\n");
		else
			write_number("222", NUM, NUM_NAME, THOUSAND);
	}
}
