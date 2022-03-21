/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:13:05 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/18 23:16:14 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	count_left;
	int	count_right;

	if ((void *) 0 == root)
		return (0);
	else
	{
		if ((void *) 0 != root->left)
			count_left = btree_level_count(root->left);
		else
			count_left = 0;
		if ((void *) 0 != root->right)
			count_right = btree_level_count(root->right);
		else
			count_right = 0;
		if (count_right > count_left)
			return (count_right + 1);
		else
			return (count_left + 1);
	}
}
