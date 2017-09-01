/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 16:25:04 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/23 19:12:54 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *root;
	t_list *node;
	t_list *next;

	root = *begin_list;
	node = 0;
	while (root)
	{
		next = (*root).next;
		(*root).next = node;
		node = root;
		root = next;
	}
	*begin_list = node;
}
