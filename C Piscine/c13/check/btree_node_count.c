/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:13:05 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/18 23:11:24 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_node_count(t_btree *root)
{
	int	count;

	count = 0;
	if ((void *) 0 != root->left)
		count = btree_node_count(root->left);
	if ((void *) 0 != root->right)
		count += btree_node_count(root->right);
	if ((void *) 0 != root)
		++count;
	return (count);
}
