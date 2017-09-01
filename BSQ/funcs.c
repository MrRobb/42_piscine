/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 23:25:16 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/30 23:25:16 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "bsq.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

int		ft_atoi(char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	while (*str == '\n' || *str == ' ' || *str == '\t' || *str == '\r' ||
		*str == '\v' || *str == '\f')
	{
		++str;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			return (0);
		str++;
	}
	while ((*str) >= '0' && (*str) <= '9')
	{
		value *= 10;
		value = (sign ? value + (*str - '0') : value - (*str - '0'));
		str++;
	}
	return (value);
}

char	*str_realloc(char **str, unsigned long buff)
{
	char			*new_str;
	unsigned int	i;

	new_str = (char *)malloc(sizeof(char) * buff);
	i = 0;
	while (i < g_len + 1)
	{
		new_str[i] = (*str)[i];
		++i;
	}
	free((*str));
	return (new_str);
}

char	*str_realloc_double(char *str, unsigned long buff)
{
	char			*new_str;
	unsigned int	i;

	new_str = (char *)malloc(sizeof(char) * buff);
	buff >>= 1;
	i = 0;
	while (i < buff)
	{
		new_str[i] = (str)[i];
		++i;
	}
	free((str));
	return (new_str);
}
