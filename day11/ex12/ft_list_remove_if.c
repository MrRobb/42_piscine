/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 19:46:25 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/23 19:18:30 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *root;
	t_list *node;
	t_list *next;

	root = *begin_list;
	node = *begin_list;
	while (root)
	{
		next = (*root).next;
		if ((cmp)(root->data, data_ref) == 0)
		{
			if (root == *begin_list)
			{
				*begin_list = next;
			}
			node->next = next;
			free(root);
		}
		node = root;
		root = next;
	}
}
