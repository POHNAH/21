/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check_0902.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:12:08 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/14 13:05:37 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	**ft_split(char *str, char *charset);

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	c = *str;
	i = 1;
	while (c != '\0')
	{
		write(1, &c, 1);
		c = *(str + i);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		else
			i++;
	}
	if (s1[i] > s2[i])
		return (1);
	else
		return (-1);
}

void	print_strings(char **strs)
{
	int	index;

	index = 0;
	while (ft_strcmp(*(strs + index), "0") != 0)
	{
		ft_putstr(*(strs + index));
		++index;
	}
}

int	main(void)
{
	char	**strs;

	ft_putstr("ex02\n");
	strs = ft_split("Hi!!!piese!!!of!!!meet!!!!", "!!!");
	print_strings(strs);
	strs = ft_split("Hi!!!piese!!!of!!!meet!!!!", "");
	print_strings(strs);
	strs = ft_split("Hi!!!piese!!!of!!!meet!!!!", "!!");
	print_strings(strs);
	strs = ft_split("Hi!!!piese!!!of!!!meet!!!!ber5be54b!!uhio!!", "!!");
	print_strings(strs);
}
