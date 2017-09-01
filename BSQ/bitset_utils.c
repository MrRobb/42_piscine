/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitset_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 23:24:57 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/30 23:24:58 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bitset_utils.h"
#include "bsq.h"

void		bs_and(t_bitset *set1, t_bitset *set2)
{
	int i;

	i = 0;
	while (i < g_numlongs)
	{
		set1[i] &= set2[i];
		i++;
	}
}

t_bitset	*bs_copy(t_bitset *set)
{
	t_bitset	*output;
	int			i;

	output = (t_bitset *)malloc(sizeof(unsigned long) * g_numlongs);
	i = 0;
	while (i < g_numlongs)
	{
		output[i] = set[i];
		i++;
	}
	return (output);
}

void		bs_shift(unsigned long **bits)
{
	int i;

	i = 0;
	while (i < g_numlongs - 1)
	{
		(*bits)[i] &= ((*bits)[i] << 1) | (((*bits)[i + 1] >> 63) & 1);
		++i;
	}
	(*bits)[g_numlongs - 1] &= (*bits)[g_numlongs - 1] << 1;
}

int			existence(t_bitset *set, int line)
{
	int				i;
	int				j;
	unsigned long	b;

	i = 0;
	b = 0;
	while (i < g_numlongs && !b)
		b = (set[i++]);
	j = 0;
	while (b && j < 64)
	{
		if (b & (((unsigned long)1 << 63) >> j))
		{
			g_x = (i - 1) * 64 + j;
			g_y = line;
			return (1);
		}
		++j;
	}
	return (0);
}
