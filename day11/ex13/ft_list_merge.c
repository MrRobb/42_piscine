/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 12:43:51 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/23 19:19:46 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *root;

	root = *begin_list1;
	if (root == 0)
		*begin_list1 = begin_list2;
	else
	{
		while (root->next)
			root = root->next;
		root->next = begin_list2;
	}
}
