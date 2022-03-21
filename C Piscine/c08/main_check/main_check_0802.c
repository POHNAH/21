/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check_0802.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 20:52:29 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/11 22:24:59 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("ABS(-2147483648) = %ld\n", ABS(-2147483648));
	printf("ABS(-2147483647) = %d\n", ABS(-2147483647));
	printf("original abs(-2147483647) = %d\n", abs(-2147483647));
	printf("ABS(10) = %d\n", ABS(10));
	return (0);
}
