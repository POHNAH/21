/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:12:48 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/22 23:41:27 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ_header.h"

int	main(int argc, char **argv)
{
	int		i;

	if (argc < 2)
		finde_sqr("");
	else
	{
		i = 1;
		while (i < argc)
		{
			finde_sqr(argv[i]);
			++i;
		}
	}
	return (0);
}
