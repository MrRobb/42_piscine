/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 23:24:41 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/30 23:24:42 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bitset.h"
#include "funcs.h"
#include "ftio.h"
#include "bsq.h"

t_bitset	*init_first_line(int fd)
{
	unsigned int i;
	unsigned int buff;

	buff = 16;
	g_str = (char *)malloc(sizeof(char) * buff);
	i = 0;
	while (read(fd, &g_str[i], 1) && g_str[i] ^ '\n')
	{
		if (i + 1 == buff)
		{
			buff <<= 1;
			g_str = str_realloc_double(g_str, buff);
		}
		i++;
	}
	g_numlongs = i / 64 + (i % 64 != 0);
	g_len = i;
	if (g_len == 0)
		return ((void *)0);
	return (init_bitset_from_str(g_str));
}

t_bitset	*init_bitset_from_str(char *str)
{
	t_bitset		*output;
	unsigned int	i;

	output = (t_bitset *)malloc(sizeof(t_bitset) * g_numlongs);
	i = -1;
	while (++i < (unsigned int)g_numlongs)
		output[i] = 0;
	i = 0;
	while (i < g_len)
	{
		if (str[i] != g_e && str[i] != g_o)
			return ((void *)0);
		output[i / 64] |= (((unsigned long)(str[i] == g_e) << 63) >> (i % 64));
		i++;
	}
	return (output);
}

t_bitset	*init_bitset(int fd, int line)
{
	int		ret;

	ret = read(fd, &(g_str[line]), g_len + 1);
	if (ret > 0)
	{
		return (init_bitset_from_str(&(g_str[line])));
	}
	return ((void *)0);
}
