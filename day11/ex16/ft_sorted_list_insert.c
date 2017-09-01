/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 15:45:47 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/23 19:28:40 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	int		here;
	t_list	*root;
	t_list	*node;

	here = 0;
	node = ft_create_elem(data);
	root = *begin_list;
	if (root)
	{
		while (root->next && (cmp(root->next->data, data) <= 0))
			root = root->next;
		node->next = root->next;
		root->next = node;
	}
	else
		*begin_list = node;
}
