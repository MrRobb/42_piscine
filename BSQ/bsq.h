/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 23:25:08 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/30 23:25:09 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "ft_bitset.h"
# include "funcs.h"
# include "ftio.h"

char	g_f;
char	g_o;
char	g_e;
int		g_n;
int		g_x;
int		g_y;
int		g_numlongs;
int		g_search_size;
char	*g_str;
char	g_first[13];
t_bitset	*g_map;

void	solve(t_bitset **map);
int		store_map(t_bitset ***map, char *file);
void	check_existence(int existence, t_bitset **map);
void	set_globals(char *str, int i);

#endif
