/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 21:26:44 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/24 22:49:39 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"


int g_i = 0;
int g_j = 0;
t_btree **g_a[2];

void add_children(t_btree *root)
{
	if ()
}

void btree_apply_by_level(t_btree *root,
	void (*applyf)(void *item, int current_level, int is_first_elem))
{
	t_btree *current;
	int level;

	if (root)
	{
		g_j = 2;
		level = -1;
		g_a = (t_btreen **)malloc(sizeof(t_btree *) * 2);
		g_a[i] = -1;
		g_a[++i] = root;
	}
	while (g_i != g_j)
	{
		current = g_a[i];
		if (current)
		{
			level += (g_a[g_i - 1] == -1);
			 applyf(current->item, level, (g_a[g_i - 1] == -1));
		}
		add_children(root);
	}
}
