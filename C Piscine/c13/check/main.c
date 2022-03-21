/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:09:02 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/17 23:48:08 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_btree.h"

void	ft_putstr(void *str)
{
	printf("%s\n", str);
}

int ft_strcmp(void *a, void *b)
{
	char *s1 = (char *)a;
	char *s2 = (char *)b;
	int i = 0;
	while( s1[i] && (s1[i] == s2[i]))
		++i;
	return ((int)(s1[i] - s2[i]));
}

int	main(void)
{
	t_btree	*root;

	printf("Insert\n");
	btree_insert_data(&root, "A\n", ft_strcmp);
	btree_insert_data(&root, "m\n", ft_strcmp);
	btree_insert_data(&root, "a\n", ft_strcmp);
	btree_insert_data(&root, "j\n", ft_strcmp);
	btree_insert_data(&root, "s\n", ft_strcmp);
	btree_insert_data(&root, "n\n", ft_strcmp);
	btree_insert_data(&root, "m\n", ft_strcmp);
	btree_insert_data(&root, "M\n", ft_strcmp);
	btree_insert_data(&root, "A\n", ft_strcmp);
	btree_insert_data(&root, "J\n", ft_strcmp);
	btree_insert_data(&root, "S\n", ft_strcmp);
	btree_insert_data(&root, "N\n", ft_strcmp);
	btree_insert_data(&root, "M\n", ft_strcmp);
	printf("\nprefix\n");
	btree_apply_prefix(root, ft_putstr);
	printf("\ninfix\n");
	btree_apply_infix(root, ft_putstr);
	printf("\nsufix\n");
	btree_apply_suffix(root, ft_putstr);
	printf("\nserch\n");
	printf("serch \'a\': %s\n", btree_search_item(root, "a", ft_strcmp));
	printf("serch \'z\': %s\n", btree_search_item(root, "z", ft_strcmp));
	printf("\ncount\n");
	printf("count = %d\n", btree_level_count(root));
	return (0);
}
