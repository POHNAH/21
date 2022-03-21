/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check_1102.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:05:10 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 21:05:28 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define N 5

int	ft_any(char **tab, int(*f)(char*));
int	ft_atoi(char *str);

int	main(void)
{
	char	*str[N] = {"1", "-4", "5", "6", "7"};
	char	*str1[N] = {"fv34", "eee", "efsef", "0", "dfvsd"};
	char	*str2[N] = {"0", "0", "0", "0", "0"};
	char	*str3[N] = {"", "", "", "", ""};

	printf("ex02\n");
	printf("ft_any({\"1\", \"-4\", \"5\", \"6\", \"7\"}, ft_atoi) = %d\n",
		ft_any(str, ft_atoi));
	printf("ft_any({\"fv34\", \"eee\", \"efsef\", \"scwcw\", \"dfvsd\"},"
		" ft_atoi) = %d\n", ft_any(str1, ft_atoi));
	printf("ft_any({\"0\", \"0\", \"0\", \"0\", \"0\"},"
		" ft_atoi) = %d\n", ft_any(str2, ft_atoi));
	printf("ft_any({\"\", \"\", \"\", \"\", \"\"},"
		" ft_atoi) = %d\n", ft_any(str3, ft_atoi));
	return (0);
}
