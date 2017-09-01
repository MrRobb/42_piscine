/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftio.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 23:24:50 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/30 23:40:08 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "ft_bitset.h"
#include <unistd.h>
#include <stdlib.h>

int		print_error(void)
{
	write(2, "map error\n", 10);
	return (1);
}

int		check_error(t_bitset **map)
{
	int i;

	i = 0;
	while (i < g_n)
	{
		if (map[i] == NULL)
			return (0);
		++i;
	}
	return (g_n);
}

void	add_full_chars(void)
{
	int i;
	int j;

	i = g_y;
	while (i < g_y + g_search_size - 1)
	{
		j = g_x;
		while (j < g_x + g_search_size - 1)
		{
			g_str[(g_len + 1) * i + j] = g_f;
			j++;
		}
		i++;
	}
}

void	input(t_bitset ***map)
{
	int		i;

	i = 0;
	while (read(0, &g_first[i], 1) && g_first[i] != '\n')
		++i;
	set_globals(g_first, i);
	(*map) = (t_bitset **)malloc(sizeof(t_bitset *) * g_n);
	(*map)[0] = init_first_line(0);
	g_str = str_realloc(&g_str, (g_len + 1) * g_n);
	if ((*map)[0] && g_len > 0)
	{
		i = 0;
		while (++i < g_n)
			(*map)[i] =
			init_bitset(0, (g_len + 1) * i);
	}
	if (check_error(*map))
	{
		solve(*map);
		add_full_chars();
		write(1, g_str, g_n * (g_len + 1));
		free(g_str);
	}
	else
		print_error();
}
