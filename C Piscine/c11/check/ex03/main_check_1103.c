/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check_1103.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:05:10 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/15 21:58:23 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define N 5

int	ft_count_if(char **tab, int length, int(*f)(char*));
int	ft_strlen(char *str);

int	main(void)
{
	char	*str[N] = {"1", "-4", "5", "6", "7"};
	char	*str1[N] = {"fv34", "", "efsef", "0", ""};
	char	*str2[N] = {"0", "0", "", "0", "0"};
	char	*str3[N] = {"", "", "", "", ""};

	printf("ex03\n");
	printf("ft_count_if({\"1\", \"-4\", \"5\", \"6\", \"7\"},"
		" 5, ft_strlen) = %d\n", ft_count_if(str, N, ft_strlen));
	printf("ft_count_if({\"fv34\", \"\", \"efsef\", \"0\", \"\"},"
		" 5, ft_strlen) = %d\n", ft_count_if(str1, N, ft_strlen));
	printf("ft_count_if({\"0\", \"0\", \"\", \"0\", \"0\"},"
		" 5, ft_strlen) = %d\n", ft_count_if(str2, N, ft_strlen));
	printf("ft_count_if({\"\", \"\", \"\", \"\", \"\"},"
		" 5, ft_strlen) = %d\n", ft_count_if(str3, N, ft_strlen));
	return (0);
}
