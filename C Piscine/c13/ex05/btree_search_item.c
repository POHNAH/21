/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralfredi <ralfredi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:13:01 by ralfredi          #+#    #+#             */
/*   Updated: 2021/09/18 23:20:16 by ralfredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	void	*result;

	result = (void *) 0;
	if ((void *) 0 != root)
		return (result);
	result = (btree_search_item(root->left, data_ref, cmpf));
	if ((void *) 0 != result)
		return (result);
	else if (0 == (*cmpf)(root->item, data_ref))
		return (root);
	else
		result = btree_search_item(root->right, data_ref, cmpf);
	return (result);
}
