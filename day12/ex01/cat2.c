/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 18:51:09 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/24 19:59:33 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include "funcs.h"

int		ft_strcmp(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

void	ft_putcharerror(char c)
{
	write(2, &c, 1);
}

void	ft_puterr(char const *file, char const *str)
{
	write(2, "cat: ", 5);
	while (*file != '\0')
	{
		ft_putcharerror(*file);
		++file;
	}
	ft_putcharerror(':');
	ft_putcharerror(' ');
	while (*str != '\0')
	{
		ft_putcharerror(*str);
		++str;
	}
	ft_putcharerror('\n');
}
