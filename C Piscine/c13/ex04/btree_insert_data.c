/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:12:53 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/17 23:48:01 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"



void	btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	if ((void *) 0 == *root)
		*root = btree_create_node(item);
	else if ((*cmpf)((*root)->item, item) > 0)
	{
		if ((void *) 0 == (*root)->left)
			(*root)->left = btree_create_node(item);
		else
			btree_insert_data(&((*root)->left), item, cmpf);
	}
	else
	{
		if ((void *) 0 == (*root)->right)
			(*root)->right = btree_create_node(item);
		else
			btree_insert_data(&((*root)->right), item, cmpf);
	}
}
